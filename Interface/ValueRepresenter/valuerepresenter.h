#ifndef VALUEREPRESENTER_H
#define VALUEREPRESENTER_H

#include <QWidget>
#include <QHBoxLayout>
#include <QComboBox>
#include <QLabel>

class ValueRepresenter : public QWidget
{
    Q_OBJECT

protected:
    int m_curr_index;
    QLabel* m_header;
    QComboBox* m_box;
    QString m_measure;
    QString m_name;


public:
    explicit ValueRepresenter(const QString&, const QString&, QWidget *parent = nullptr);
    virtual ~ValueRepresenter();

    virtual void setValueOnly(float) = 0;
    virtual float valueOnly() const = 0;
    virtual void setFixedEditWidth(int) = 0;
    virtual void setDisabled(bool) = 0;

    void setValue(float);
    float value() const;

    void setMeasure(const QString&);    

protected:
    void setWidgets(QLabel*, QComboBox*);
    static float power(int);

signals:
    void valueChanged();
    void valueEdited(float);

public slots:
    virtual void newValueEdited();
    virtual void prefixChanged(int);
};

#endif // VALUEREPRESENTER_H
