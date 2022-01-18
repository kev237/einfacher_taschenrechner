#include "taschenrechner.h"
#include "ui_taschenrechner.h"
#include "QLocale"

Taschenrechner::Taschenrechner(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Taschenrechner)
{
    ui->setupUi(this);
}

Taschenrechner::~Taschenrechner()
{
    delete ui;
}

void Taschenrechner::on_operation_clicked(){
    float zahl1, zahl2, erg = 0;
    bool Flag = false;
    QString ausgabe;

    //zahl1 = ui->num1->text().toFloat();
    zahl1 = locale().toFloat(ui->num1->text());
    //zahl2 = ui->num2->text().toFloat();
    zahl2 = locale().toFloat(ui->num2->text());


    if(ui->min->isChecked()==true){
        erg = zahl1 - zahl2;
    }
    if(ui->mult->isChecked()==true){
        erg = zahl1 * zahl2;
    }
    if(zahl2 !=0){
        if(ui->div->isChecked()==true){
            erg = zahl1 / zahl2;
    } else Flag = true;

    }
    if(ui->add->isChecked()==true){
        erg = zahl1 + zahl2;
    }
    if(Flag == true){
        ausgabe = "nicht definiert";
    }else ausgabe.setNum(erg);

    //das Ergebnis anzeigen

    ausgabe = locale().toString(erg);
    ui->label->setText(ausgabe);
    ui->lcdNumber->display(erg);
}

void Taschenrechner:: on_reset_clicked(){
    ui->num1->setText("0");
    ui->num2->setText("0");
}
