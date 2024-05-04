#include <iostream>
#include "BinarySearchTree.h"
#include "FamilyTree.h"
#include "Person.h"
#include <string>


using namespace std;

int main (){
    /* BST notes
    BinarySearchTree<int> intBst;

    cout << "Insert Element: ";
    int value;
    cin >> value;

    while(value != -1){
        intBst.insertNode(value);
        cout << "Insert element: ";
        cin >> value;
    }

    intBst.inOrderTraversal();

    cout << "Enter search key: ";
    cin >> value;

    while (value != -1){
        TreeNode<int> * resultPtr = intBst.searchKey(value);

        if (resultPtr == nullptr){
            cout << "Not found." << endl;
        } else {
            cout << "Found " << resultPtr->getData() << endl;
        }

        cout << "Enter search key: ";
        cin >> value;
    }
    */

    // Head of Family starting from 1847, Phineus Nigellus Black
    // ----------------------------------------------------------
    Person Phineus{"Phineus Nigellus", "Black", "1847-1925"};
    FamilyMember<Person>* PhineusBlack = new FamilyMember<Person>{Phineus};

    // Children of Phineus Nigellus Black
    // ----------------------------------------------------------
    Person Sirius{"Sirius", "Black", "1877-1952", "Hesper Gamp"};
    FamilyMember<Person> * SiriusBlack = new FamilyMember<Person>{Sirius};

    Person Cygnus{"Cygnus", "Black", "1889-1943", "Violetta Bulstrode"};
    FamilyMember<Person> * CygnusBlack = new FamilyMember<Person>{Cygnus};

    Person Belvina{"Belvina", "Black", "1886-1962", "Herbert Burke"};
    FamilyMember<Person> * BelvinaBlack = new FamilyMember<Person>{Belvina};

    Person Arcturus{"Arcturus", "Black", "1884-1959", "Lysandra Yaxley"};
    FamilyMember<Person> * ArcturusBlack = new FamilyMember<Person>{Arcturus};

    PhineusBlack->addChild(SiriusBlack);
    PhineusBlack->addChild(CygnusBlack);
    PhineusBlack->addChild(BelvinaBlack);
    PhineusBlack->addChild(ArcturusBlack);

    // Children of Sirius Black 1877-1952
    // ----------------------------------------------------------
    Person ArcturusII{"Arcturus", "Black II", "1901-1991", "Melania Macmillan"};
    FamilyMember<Person> * ArcturusBlackII = new FamilyMember<Person>{ArcturusII};
    
    Person Lycoris{"Lycoris", "Black", "1904-1965"};
    FamilyMember<Person> * LycorisBlack = new FamilyMember<Person>{Lycoris};

    Person Regulus{"Regulus", "Black", "1906-1959"};
    FamilyMember<Person> * RegulusBlack = new FamilyMember<Person>{Regulus};


    SiriusBlack->addChild(ArcturusBlackII);
    SiriusBlack->addChild(LycorisBlack);
    SiriusBlack->addChild(RegulusBlack);

    // Children of Arcturus Black II 1901-1991
    // ----------------------------------------------------------
    Person Lucretia{"Lucretia", "Black", "1925-1992", "Ignatius Prewett"};
    FamilyMember<Person> * LucretiaBlack = new FamilyMember<Person>{Lucretia};

    Person Orion{"Orion", "Black", "1929-1979", "Walburga Black"};
    FamilyMember<Person> * OrionBlack = new FamilyMember<Person>{Orion};

    ArcturusBlackII->addChild(LucretiaBlack);
    ArcturusBlackII->addChild(OrionBlack);

    // Children of Orion Black 1929-1979
    // ----------------------------------------------------------
    Person RegulusII{"Regulus", "Black", "1961-1979"};
    FamilyMember<Person> * RegulusBlackII = new FamilyMember<Person>{RegulusII};

    OrionBlack->addChild(RegulusBlackII);
    
    // Children of Cygnus Black 1889-1943
    // ----------------------------------------------------------
    Person Pollux{"Pollux", "Black", "1912-1990", "Irma Crabbe"};
    FamilyMember<Person> * PolluxBlack = new FamilyMember<Person>{Pollux};

    Person Cassiopeia{"Cassiopeia", "Black", "1915-1992"};
    FamilyMember<Person> * CassiopeiaBlack = new FamilyMember<Person>{Cassiopeia};

    Person Dorea{"Dorea", "Black", "1920-1977", "Charlus Potter"};
    FamilyMember<Person> * DoreaBlack = new FamilyMember<Person>{Dorea};

    CygnusBlack->addChild(PolluxBlack);
    CygnusBlack->addChild(CassiopeiaBlack);
    CygnusBlack->addChild(DoreaBlack);

    // Children of Pollux Black 1912-1940
    // ----------------------------------------------------------
    Person Walburga{"Walburga", "Black", "1925-1985", "Orion Black"};
    FamilyMember<Person> * WalburgaBlack = new FamilyMember<Person>{Walburga};

    Person CygnusII{"Cygnus", "Black II", "1938-1992", "Druella Rosier"};
    FamilyMember<Person> * CygnusBlackII = new FamilyMember<Person>{CygnusII};
    
    PolluxBlack->addChild(WalburgaBlack);
    PolluxBlack->addChild(CygnusBlackII);

    // Children of Walburga Black 1925-1985
    // ----------------------------------------------------------
    WalburgaBlack->addChild(RegulusBlackII);

    // Children of Cygnus Black II 
    // ----------------------------------------------------------
    Person Bellatrix{"Bellatrix", "Lestrange", "1951-", "Rodolphus Lestrange"};
    FamilyMember<Person> * BellatrixBlack = new FamilyMember<Person>{Bellatrix};

    Person Narcissa{"Narcissa", "Malfoy", "1955-", "Lucius Malfoy"};
    FamilyMember<Person> * NarcissaBlack = new FamilyMember<Person>{Narcissa};

    CygnusBlackII->addChild(BellatrixBlack);
    CygnusBlackII->addChild(NarcissaBlack);

    // Children of Narcissa Malfoy
    // ----------------------------------------------------------
    Person Draco{"Draco", "Malfoy", "1980-"};
    FamilyMember<Person> * DracoBlack = new FamilyMember<Person>{Draco};

    NarcissaBlack->addChild(DracoBlack);

    // Children of Arcturus Black
    // ----------------------------------------------------------
    Person Callidora{"Callidora", "Longbottom", "1915-", "Harfang Longbottom"};
    FamilyMember<Person> * CallidoraBlack = new FamilyMember<Person>{Callidora};

    ArcturusBlack->addChild(CallidoraBlack);

    Person Charis{"Charis", "Crouch", "1919-1973", "Caspar Crouch"};
    FamilyMember<Person> * CharisBlack = new FamilyMember<Person>{Charis};

    ArcturusBlack->addChild(CharisBlack);


    // End of Inputs
    // ----------------------------------------------------------
    
    FamilyTree<Person> blackFamilyTree(PhineusBlack);

    
    // blackFamilyTree.preOrderTraversal();


    string input;
    cout << "Enter a firstname in the Black family tree (-1 to exit): ";
    cin >> input;
    cout << endl;

    while (input != "-1"){
        blackFamilyTree.searchMember(input);
        cout << "\nEnter a firstname in the Black family tree (-1 to exit): ";
        cin >> input;
        cout << endl;
    }
    return 0;
}