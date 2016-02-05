#include "FenPrincipal.h"

FenPrincipal::FenPrincipal() : QWidget(){

    // On initialise les widgets
    this->initialise();

    // On construit la fenêtre
    this->buildWindow();
}

/**
 * @brief FenPrincipal::initialise
 *
 * @return void
 *
 * Intialise les widgets
 **/

void FenPrincipal::initialise(){
    // GroupBox
    GB_defClass = new QGroupBox("Définition de la classe");
    GB_options = new QGroupBox("Options");
    GB_comments = new QGroupBox("Ajouter des commentaires");
    GB_comments->setCheckable(true);
    GB_comments->setChecked(false);

    // Label
    LB_name = new QLabel("Nom : ");
    LB_classPrent = new QLabel("Classe parent :");
    LB_autheur = new QLabel("Auteur :");
    LB_created = new QLabel("Date de création :");
    LB_role = new QLabel("Role de la classe :");

    // CheckBox
    CB_protection = new QCheckBox("Protéger le header contre les inclusion multiples");
    CB_constructor = new QCheckBox("Générer un consrtructeur par défaut");
    CB_destructor = new QCheckBox("Générer un destructeur");

    // Champs
    CH_name = new QLineEdit();
    CH_parent = new QLineEdit();
    CH_autheur = new QLineEdit();
    CH_created = new QDateEdit();
    CH_role = new QTextEdit();

    // Layout
    layoutPrincipale = new QVBoxLayout();
    layoutDef = new QVBoxLayout();
    layoutOptions = new QVBoxLayout();
    layoutComments = new QVBoxLayout();
    layoutName = new QHBoxLayout();
    layoutParent = new QHBoxLayout();
    layoutAutheur = new QHBoxLayout();
    layoutCreated = new QHBoxLayout();
    layoutRole = new QHBoxLayout();
    layoutAction = new QHBoxLayout();

    // button
    BTN_gen =  new QPushButton("Générer la classe");
    BTN_quitter =  new QPushButton("Quitter");
}

/**
 * @brief FenPrincipal::buildWindow
 * @return void
 *
 * Construit la fenêtre
 **/
void FenPrincipal::buildWindow(){
    setFixedSize(350, 500);

    this->buildDef();
    this->buildOptions();
    this->buildComments();
    this->buildActions();

    setLayout(this->layoutPrincipale);
}

/**
 * @brief FenPrincipal::buildDef
 * @return void
 * Construit le groupe de définition
 **/
void FenPrincipal::buildDef(){

    // Name
    this->layoutName->addWidget(this->LB_name);
    this->layoutName->addWidget(this->CH_name);

    // parent
    this->layoutParent->addWidget(this->LB_classPrent);
    this->layoutParent->addWidget(this->CH_parent);

    this->layoutDef->addLayout(this->layoutName);
    this->layoutDef->addLayout(this->layoutParent);

    this->GB_defClass->setLayout(this->layoutDef);
    this->layoutPrincipale->addWidget(this->GB_defClass);
}

/**
 * @brief FenPrincipal::buildOptions
 * @return void
 *
 * Construit le groupe options
 **/

void FenPrincipal::buildOptions() {
    this->layoutOptions->addWidget(this->CB_protection);
    this->layoutOptions->addWidget(this->CB_constructor);
    this->layoutOptions->addWidget(this->CB_destructor);

    this->GB_options->setLayout(this->layoutOptions);
    this->layoutPrincipale->addWidget(this->GB_options);
}

/**
 * @brief FenPrincipal::buildComments
 * @return void
 *
 * Construit le groupe commentaire
 **/
void FenPrincipal::buildComments(){

    this->layoutAutheur->addWidget(LB_autheur);
    this->layoutAutheur->addWidget(CH_autheur);

    this->layoutCreated->addWidget(LB_created);
    this->layoutCreated->addWidget(CH_created);

    this->layoutRole->addWidget(LB_role);
    this->layoutRole->addWidget(CH_role);

    this->layoutComments->addLayout(this->layoutAutheur);
    this->layoutComments->addLayout(this->layoutCreated);
    this->layoutComments->addLayout(this->layoutRole);

    this->GB_comments->setLayout(this->layoutComments);
    this->layoutPrincipale->addWidget(this->GB_comments);
}

/**
 * @brief FenPrincipal::buildActions
 * @return void
 *
 * Construit le groupe action
 **/
void FenPrincipal::buildActions(){
    this->layoutAction->addWidget(this->BTN_gen);
    this->layoutAction->addWidget(this->BTN_quitter);

    this->layoutPrincipale->addLayout(this->layoutAction);
}


