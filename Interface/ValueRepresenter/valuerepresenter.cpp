#include "valuerepresenter.h"

#include <QLabel>
#include <QComboBox>
#include <cmath>
#include <QDebug>

#include "Options/dictionary.h"

ValueRepresenter::ValueRepresenter(const QString& name, const QString& measure, QWidget *parent):
    QWidget(parent),
    m_curr_index(4),
    m_header(nullptr),
    m_box(nullptr),
    m_measure(measure),
    m_name(name)
{
}

ValueRepresenter::~ValueRepresenter()
{
}

void ValueRepresenter::setValue(float val)
{
    static const int prefix_size = 9;
    bool is_positive = (val > 0);
    if(!is_positive)
    {
        val = -val;
    }

    int indx = 4;

    if(val > 0.0000000000000001f)
    {
        if(abs(val) < 1.f)
        {
            do
            {
                val *= 1000;
                indx -= 1;
            } while(abs(val) < 1.f && indx != 0);
        }
        else
        {
            while(abs(val) > 1000.f && indx != prefix_size)
            {
                val /= 1000;
                indx += 1;
            }
        }
    }

    if(!is_positive)
    {
        val = -val;
    }

    m_box->setCurrentIndex(indx);
    setValueOnly(val);
}

float ValueRepresenter::value() const
{
    return valueOnly() * power(m_curr_index);
}

void ValueRepresenter::setMeasure(const QString& m)
{
    disconnect(m_box, SIGNAL(currentIndexChanged(int)), this, SLOT(prefixChanged(int)));
    m_measure = m;
    m_box->clear();
    QStringList list = Dictionary::prefix();
    for(const QString& prefix : list)
    {
        m_box->addItem(prefix + m_measure);
    }
    m_box->setCurrentIndex(m_curr_index);
    connect(m_box, SIGNAL(currentIndexChanged(int)), this, SLOT(prefixChanged(int)));
}

void ValueRepresenter::setWidgets(QLabel* label, QComboBox* box)
{
    m_header = label;
    m_box = box;
    m_header->setText(m_name + " =");
    QStringList list = Dictionary::prefix();
    for(const QString& prefix : list)
    {
        m_box->addItem(prefix + m_measure);
    }
    m_box->setCurrentIndex(m_curr_index);
    connect(m_box, SIGNAL(currentIndexChanged(int)), this, SLOT(prefixChanged(int)));
}

void ValueRepresenter::newValueEdited()
{
    emit(valueChanged());
    emit(valueEdited(value()));
}

void ValueRepresenter::prefixChanged(int indx)
{
    setValueOnly(value()/power(indx));
    m_curr_index = indx;
}

float ValueRepresenter::power(int indx)
{
    return pow(10, -12 + indx * 3);
}
