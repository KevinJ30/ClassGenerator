#ifndef FENPRINCIPAL_H
#define FENPRINCIPAL_H

#include <QWidget>

// Widgets
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QTextEdit>
#include <QGroupBox>
#include <QDateEdit>
#include <QPushButton>

// Layout
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>



class FenPrincipal : public QWidget
{
    Q_OBJECT

    public :

    // Constructeur
    FenPrincipal();

    private :

    /**
      * Property
      **/

    // GroupBox
    QGroupBox *GB_defClass;
    QGroupBox *GB_options;
    QGroupBox *GB_comments;

    // Label
    QLabel *LB_name;
    QLabel *LB_classPrent;
    QLabel *LB_autheur;
    QLabel *LB_created;
    QLabel *LB_role;

    // CheckBox
    QCheckBox *CB_protection;
    QCheckBox *CB_constructor;
    QCheckBox *CB_destructor;
    QCheckBox *CB_comments;

    // Champs
    QLineEdit *CH_name;
    QLineEdit *CH_parent;
    QLineEdit *CH_autheur;
    QDateEdit *CH_created;
    QTextEdit *CH_role;

    // Button
    QPushButton *BTN_gen;
    QPushButton *BTN_quitter;

    // Layout
    QVBoxLayout *layoutPrincipale;
    QVBoxLayout *layoutDef;
    QVBoxLayout *layoutOptions;
    QVBoxLayout *layoutComments;
    QHBoxLayout *layoutName;
    QHBoxLayout *layoutParent;
    QHBoxLayout *layoutAutheur;
    QHBoxLayout *layoutCreated;
    QHBoxLayout *layoutRole;
    QHBoxLayout *layoutAction;

    /**
      * Methode privé de la class
      **/
    void initialise();

    void buildWindow();
    void buildDef();
    void buildOptions();
    void buildComments();
    void buildActions();

};

#endif // FENPRINCIPAL_H
