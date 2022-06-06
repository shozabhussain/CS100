#include <iostream>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
#include <cstring>
#include <conio.h>

using namespace std;

int cards_left = 108; //Number of cards left in the deck through out the game
vector<string> playing;//vector for the playing pile
vector<string> player1_hand; //vector for cards in player 1's hand
vector<string> player2_hand;//vector for cards in player 2's hand
vector<string> deck;//vector for deck
vector<string> deck1;//vector for filtered deck
string CARDS[108] = {"R0","R11","R12","R21","R22","R31","R32","R41","R42","R51","R52","R61","R62","R71","R72","R81","R82","R91","R92","RD1","RD2","RS1","RS2","RR1","RR2","B0","B11","B12","B21","B22","B31","B32","B41","B42","B51","B52","B61","B62","B71","B72","B81","B82","B91","B92","BD1","BD2","BS1","BS2","BR1","BR2","G0","G11","G12","G21","G22","G31","G32","G41","G42","G51","G52","G61","G62","G71","G72","G81","G82","G91","G92","GD1","GD2","GS1","GS2","GR1","GR2","Y0","Y11","Y12","Y21","Y22","Y31","Y32","Y41","Y42","Y51","Y52","Y61","Y62","Y71","Y72","Y81","Y82","Y91","Y92","YD1","YD2","YS1","YS2","YR1","YR2","WD1","WD2","WD3","WD4","WF1","WF2","WF3","WF4"};
string CARDS2[100] = {"R0","R11","R12","R21","R22","R31","R32","R41","R42","R51","R52","R61","R62","R71","R72","R81","R82","R91","R92","RD1","RD2","RS1","RS2","RR1","RR2","B0","B11","B12","B21","B22","B31","B32","B41","B42","B51","B52","B61","B62","B71","B72","B81","B82","B91","B92","BD1","BD2","BS1","BS2","BR1","BR2","G0","G11","G12","G21","G22","G31","G32","G41","G42","G51","G52","G61","G62","G71","G72","G81","G82","G91","G92","GD1","GD2","GS1","GS2","GR1","GR2","Y0","Y11","Y12","Y21","Y22","Y31","Y32","Y41","Y42","Y51","Y52","Y61","Y62","Y71","Y72","Y81","Y82","Y91","Y92","YD1","YD2","YS1","YS2","YR1","YR2"};

void Instructions()//Instructions regarding the game play.
{
    cout<<"----------------------------------------INSTRUCTIONS-----------------------------------------------------\n";
    cout<<"Welcome to Two Player UNO!\n\n";
    cout<<"This game is your typical and old-fashioned UNO\n\n";
    cout<<"To select a card that you want to play please enter the corresponding code of the card mentioned below it.\n\n";
    cout<<"Please make sure all entries you make are in capital letters because this program is case-sensitive.\n\n";
    cout<<"Before dealing a card please check whether your card matches the letter of the color or type of the card on the top of the playing pile\n\n";
    cout<<"Which ever player finishes the cards in their hands first wins.\n\n";

    cout<<"-------DIAGRAM EXPLAINING CARD CODES------\n";
    cout<<"ABC\n";
    cout<<"A\t\tB\t\tC\n";
    cout<<"|\t\t|\t\t|\t\t\n";
    cout<<"V\t\tV\t\tV\t\t\n";
    cout<<"Color of Card   Type of Color   First or Second Card of that type\n";
}
void UNOdeck() //Array of strings representing UNO cards are pushed into the vector 'deck'.
{
    for (int i=0;i<108;i++)
    {
        deck.push_back(CARDS[i]);
    }
}

void UNodeck1()//Array of strings representing UNO cards are pushed into the vector 'deck1'.
{
    for(int i=0; i<100; i++)
    {
        deck1.push_back(CARDS2[i]);
    }
}

void PrintCard (string x) //Printing template for numbered cards.
{
            cout<<" ---------"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|    "<< x << "    |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<" --------- "<<endl;
}

void CardCheck (string choice , int a)//Takes in user's input and prints out the corresponding card
{
        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(color, a);
        string x ;
        if(choice.substr(1,2)=="0")
        {
            x= "0" ;
            PrintCard(x) ;
            cout<<choice;
        }

        else if(choice.substr(1,2)=="11" || choice.substr(1,2)=="12")
        {
            x= "1";
            PrintCard(x) ;
            cout<<choice;
        }

        else if(choice.substr(1,2)=="21" || choice.substr(1,2)=="22")
        {
            x="2";
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="31" || choice.substr(1,2)=="32")
        {
            x="3" ;
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="41" || choice.substr(1,2)=="42")
        {
            x= "4" ;
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="51" || choice.substr(1,2)=="52")
        {
            x="5" ;
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="61" || choice.substr(1,2)=="62")
        {
            x="6";
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="71" || choice.substr(1,2)=="72")
        {
            x="7" ;
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="81" || choice.substr(1,2)=="82")
        {
            x="8";
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="91" || choice.substr(1,2)=="92")
        {
            x="9";
            PrintCard(x) ;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="D1" || choice.substr(1,2)=="D2")
        {
            x="D";
            cout<<" ---------"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|  DRAW   |"<<endl;
            cout<<"|  TWO    |"<<endl;
            cout<<"|         |"<<endl;
            cout<<" --------- "<<endl;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="R1" || choice.substr(1,2)=="R2")
        {
            x="R";
            cout<<" ---------"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"| REVERSE |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<" ---------"<<endl;
            cout<<choice;
        }
        else if(choice.substr(1,2)=="S1" || choice.substr(1,2)=="S2")
        {
            x="S";
            cout<<" ---------"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|  SKIP   |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<" ---------"<<endl;
            cout<<choice;

        }
    }

void AskUser(string choice)//Takes input from user and sends relevant data to CardCheck
{
    string x;
    //cout<<"\n5";
    if(choice.substr(0,1)=="Y")
    {
        CardCheck(choice , 6) ;
    }
    else if (choice.substr(0,1)=="B")
    {
        CardCheck(choice , 11) ;
    }
    else if(choice.substr(0,1)=="G")
    {
        CardCheck(choice , 10) ;
    }
    else if(choice.substr(0,1)=="R")
    {
        CardCheck(choice , 12) ;
    }
    else if(choice =="WF1" || choice =="WF2" || choice =="WF3" || choice =="WF4")
    {
        x="D";
        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 7);
            cout<<" ---------"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|  DRAW   |"<<endl;
            cout<<"|  FOUR   |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<" --------- "<<endl;
            cout<<choice;
    }
    else if(choice =="WD1" || choice =="WD2" || choice =="WD3" || choice =="WD4")
    {
        HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 7);
            cout<<" ---------"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|  WILD   |"<<endl;
            cout<<"|         |"<<endl;
            cout<<"|         |"<<endl;
            cout<<" ---------"<<endl;
            cout<<choice;
    }


}

void MatchInput(string choice) //Function to push the player's card choice into the playing pile vector
{
    if(choice.substr(0,1)=="Y")
    {
        if (choice.substr(1,1)=="0")
            {
                playing.push_back("Y0");
            }

        else if(choice.substr(1,1)=="1")
            {
                if(choice.substr(1,2)=="12")
                    {
                        playing.push_back("Y12");
                    }

                else
                    {
                        playing.push_back("Y11");
                    }
            }

        else if(choice.substr(1,1)=="2")
            {
                if(choice.substr(1,2)=="22")
                    {
                        playing.push_back("Y22");
                    }

                else//
                    {
                        playing.push_back("Y21");
                    }
            }

        else if(choice.substr(1,1)=="3")
            {
                if(choice.substr(1,2)=="32")
                    {
                        playing.push_back("Y32");
                    }

                else//
                    {
                        playing.push_back("Y31");
                    }
            }

        else if(choice.substr(1,1)=="4")
            {
                if(choice.substr(1,2)=="42")
                    {
                        playing.push_back("Y42");
                    }

                else//
                    {
                        playing.push_back("Y41");
                    }
            }

        else if(choice.substr(1,1)=="5")
            {
                if(choice.substr(1,2)=="52")
                    {
                        playing.push_back("Y52");
                    }

                else//
                    {
                        playing.push_back("Y51");
                    }
            }

        else if(choice.substr(1,1)=="6")
            {
                if(choice.substr(1,2)=="62")
                    {
                        playing.push_back("Y62");
                    }

                else//
                    {
                        playing.push_back("Y61");
                    }
            }

        else if(choice.substr(1,1)=="7")
            {
                if(choice.substr(1,2)=="72")
                    {
                        playing.push_back("Y72");
                    }

                else//
                    {
                        playing.push_back("Y71");
                    }
            }

        else if(choice.substr(1,1)=="8")
            {
                if(choice.substr(1,2)=="82")
                    {
                        playing.push_back("Y82");
                    }

                else//
                    {
                        playing.push_back("Y81");
                    }
            }

       else if(choice.substr(1,1)=="9")
            {
                if(choice.substr(1,2)=="92")
                    {
                        playing.push_back("Y92");
                    }

                else//
                    {
                        playing.push_back("Y91");
                    }
            }

        else if(choice.substr(1,1)=="S")
            {
                if(choice.substr(1,2)=="S2")
                    {
                        playing.push_back("YS2");
                    }

                else//
                    {
                        playing.push_back("YS1");
                    }
            }

        else if(choice.substr(1,1)=="R")
            {
                if(choice.substr(1,2)=="R2")
                    {
                        playing.push_back("YR2");
                    }

                else//
                    {
                        playing.push_back("YR1");
                    }
            }

        else if(choice.substr(1,1)=="D")
            {
                if(choice.substr(1,2)=="D2")
                    {
                        playing.push_back("YD2");
                    }

                else//
                    {
                        playing.push_back("YD1");
                    }
            }
    }
    if(choice.substr(0,1)=="R")
    {
        if (choice.substr(1,1)=="0")
            {
                playing.push_back("R0");
            }

        else if(choice.substr(1,1)=="1")
            {
                if(choice.substr(1,2)=="12")
                    {
                        playing.push_back("R12");
                    }

                else
                    {
                        playing.push_back("R11");
                    }
            }

        else if(choice.substr(1,1)=="2")
            {
                if(choice.substr(1,2)=="22")
                    {
                        playing.push_back("R22");
                    }

                else//
                    {
                        playing.push_back("R21");
                    }
            }

        else if(choice.substr(1,1)=="3")
            {
                if(choice.substr(1,2)=="32")
                    {
                        playing.push_back("R32");
                    }

                else//
                    {
                        playing.push_back("R31");
                    }
            }

        else if(choice.substr(1,1)=="4")
            {
                if(choice.substr(1,2)=="42")
                    {
                        playing.push_back("R42");
                    }

                else//
                    {
                        playing.push_back("R41");
                    }
            }

        else if(choice.substr(1,1)=="5")
            {
                if(choice.substr(1,2)=="52")
                    {
                        playing.push_back("R52");
                    }

                else//
                    {
                        playing.push_back("R51");
                    }
            }

        else if(choice.substr(1,1)=="6")
            {
                if(choice.substr(1,2)=="62")
                    {
                        playing.push_back("R62");
                    }

                else//
                    {
                        playing.push_back("R61");
                    }
            }

        else if(choice.substr(1,1)=="7")
            {
                if(choice.substr(1,2)=="72")
                    {
                        playing.push_back("R72");
                    }

                else//
                    {
                        playing.push_back("R71");
                    }
            }

        else if(choice.substr(1,1)=="8")
            {
                if(choice.substr(1,2)=="82")
                    {
                        playing.push_back("R82");
                    }

                else//
                    {
                        playing.push_back("R81");
                    }
            }

       else if(choice.substr(1,1)=="9")
            {
                if(choice.substr(1,2)=="92")
                    {
                        playing.push_back("R92");
                    }

                else//
                    {
                        playing.push_back("R91");
                    }
            }

        else if(choice.substr(1,1)=="S")
            {
                if(choice.substr(1,2)=="S2")
                    {
                        playing.push_back("RS2");
                    }

                else//
                    {
                        playing.push_back("RS1");
                    }
            }

        else if(choice.substr(1,1)=="R")
            {
                if(choice.substr(1,2)=="R2")
                    {
                        playing.push_back("RR2");
                    }

                else//
                    {
                        playing.push_back("RR1");
                    }
            }

        else if(choice.substr(1,1)=="D")
            {
                if(choice.substr(1,2)=="D2")
                    {
                        playing.push_back("RD2");
                    }

                else//
                    {
                        playing.push_back("RD1");
                    }
            }
    }
    if(choice.substr(0,1)=="G")
    {
        if (choice.substr(1,1)=="0")
            {
                playing.push_back("G0");
            }

        else if(choice.substr(1,1)=="1")
            {
                if(choice.substr(1,2)=="12")
                    {
                        playing.push_back("G12");
                    }

                else
                    {
                        playing.push_back("G11");
                    }
            }
        else if(choice.substr(1,1)=="2")
            {
                if(choice.substr(1,2)=="22")
                    {
                        playing.push_back("G22");
                    }

                else//
                    {
                        playing.push_back("G21");
                    }
            }

        else if(choice.substr(1,1)=="3")
            {
                if(choice.substr(1,2)=="32")
                    {
                        playing.push_back("G32");
                    }

                else//
                    {
                        playing.push_back("G31");
                    }
            }

        else if(choice.substr(1,1)=="4")
            {
                if(choice.substr(1,2)=="42")
                    {
                        playing.push_back("G42");
                    }

                else//
                    {
                        playing.push_back("G41");
                    }
            }

        else if(choice.substr(1,1)=="5")
            {
                if(choice.substr(1,2)=="52")
                    {
                        playing.push_back("G52");
                    }

                else//
                    {
                        playing.push_back("G51");
                    }
            }

        else if(choice.substr(1,1)=="6")
            {
                if(choice.substr(1,2)=="62")
                    {
                        playing.push_back("G62");
                    }

                else//
                    {
                        playing.push_back("G61");
                    }
            }

        else if(choice.substr(1,1)=="7")
            {
                if(choice.substr(1,2)=="72")
                    {
                        playing.push_back("G72");
                    }

                else//
                    {
                        playing.push_back("G71");
                    }
            }

        else if(choice.substr(1,1)=="8")
            {
                if(choice.substr(1,2)=="82")
                    {
                        playing.push_back("G82");
                    }

                else//
                    {
                        playing.push_back("G81");
                    }
            }

       else if(choice.substr(1,1)=="9")
            {
                if(choice.substr(1,2)=="92")
                    {
                        playing.push_back("G92");
                    }

                else//
                    {
                        playing.push_back("G91");
                    }
            }

        else if(choice.substr(1,1)=="S")
            {
                if(choice.substr(1,2)=="S2")
                    {
                        playing.push_back("GS2");
                    }

                else//
                    {
                        playing.push_back("GS1");
                    }
            }

        else if(choice.substr(1,1)=="R")
            {
                if(choice.substr(1,2)=="R2")
                    {
                        playing.push_back("GR2");
                    }

                else//
                    {
                        playing.push_back("GR1");
                    }
            }

        else if(choice.substr(1,1)=="D")
            {
                if(choice.substr(1,2)=="D2")
                    {
                        playing.push_back("GD2");
                    }

                else
                    {
                        playing.push_back("GD1");
                    }
            }
    }
    if(choice.substr(0,1)=="B")
    {
        if (choice.substr(1,1)=="0")
            {
                playing.push_back("B0");
            }

        else if(choice.substr(1,1)=="1")
            {
                if(choice.substr(1,2)=="12")
                    {
                        playing.push_back("B12");
                    }

                else
                    {
                        playing.push_back("B11");
                    }
            }

        else if(choice.substr(1,1)=="2")
            {
                if(choice.substr(1,2)=="22")
                    {
                        playing.push_back("B22");
                    }

                else//
                    {
                        playing.push_back("B21");
                    }
            }

        else if(choice.substr(1,1)=="3")
            {
                if(choice.substr(1,2)=="32")
                    {
                        playing.push_back("B32");
                    }

                else//
                    {
                        playing.push_back("B31");
                    }
            }

        else if(choice.substr(1,1)=="4")
            {
                if(choice.substr(1,2)=="42")
                    {
                        playing.push_back("B42");
                    }

                else//
                    {
                        playing.push_back("B41");
                    }
            }

        else if(choice.substr(1,1)=="5")
            {
                if(choice.substr(1,2)=="52")
                    {
                        playing.push_back("B52");
                    }

                else//
                    {
                        playing.push_back("B51");
                    }
            }

        else if(choice.substr(1,1)=="6")
            {
                if(choice.substr(1,2)=="62")
                    {
                        playing.push_back("B62");
                    }

                else//
                    {
                        playing.push_back("B61");
                    }
            }

        else if(choice.substr(1,1)=="7")
            {
                if(choice.substr(1,2)=="72")
                    {
                        playing.push_back("B72");
                    }

                else//
                    {
                        playing.push_back("B71");
                    }
            }

        else if(choice.substr(1,1)=="8")
            {
                if(choice.substr(1,2)=="82")
                    {
                        playing.push_back("B82");
                    }

                else//
                    {
                        playing.push_back("B81");
                    }
            }

       else if(choice.substr(1,1)=="9")
            {
                if(choice.substr(1,2)=="92")
                    {
                        playing.push_back("B92");
                    }

                else//
                    {
                        playing.push_back("B91");
                    }
            }

        else if(choice.substr(1,1)=="S")
            {
                if(choice.substr(1,2)=="S2")
                    {
                        playing.push_back("BS2");
                    }

                else//
                    {
                        playing.push_back("BS1");
                    }
            }

        else if(choice.substr(1,1)=="R")
            {
                if(choice.substr(1,2)=="R2")
                    {
                        playing.push_back("BR2");
                    }

                else//
                    {
                        playing.push_back("BR1");
                    }
            }

        else if(choice.substr(1,1)=="D")
            {
                if(choice.substr(1,2)=="D2")
                    {
                        playing.push_back("BD2");
                    }

                else//
                    {
                        playing.push_back("BD1");
                    }
            }
    }
    if(choice.substr(0,1)=="W")
    {
        if(choice.substr(1,1)=="D")
            {
                if(choice.substr(1,2)=="1")
                    {
                        playing.push_back("WD1");
                    }

                else if(choice.substr(1,2)=="2")
                    {
                        playing.push_back("WD2");
                    }
                else if(choice.substr(1,2)=="3")
                    {
                        playing.push_back("WD3");
                    }
                else if(choice.substr(1,2)=="4")
                    {
                        playing.push_back("WD4");
                    }
            }
        else if(choice.substr(1,1)=="F")
        {
            if(choice.substr(1,2)=="1")
                    {
                        playing.push_back("WF1");
                    }

                else if(choice.substr(1,2)=="2")
                    {
                        playing.push_back("WF2");
                    }
                else if(choice.substr(1,2)=="3")
                    {
                        playing.push_back("WF3");
                    }
                else if(choice.substr(1,2)=="4")
                    {
                        playing.push_back("WF4");
                    }
        }
    }

}

void DisplayPlayingDeck(vector<string> playing) //Function to display the top most playing pile card
{
    cout<<"\n4";
    int n = playing.size();
    AskUser(playing[n-1]);
}

void CallFunction() //Function to call DisplayPlayingDeck
{
    DisplayPlayingDeck(playing);
}

void DealCardsToPlayer1() //Function to deal 7 cards to player 1
{
    srand(time(0));

    int random = 0;

    for(int i=0; i<7; i++)
    {
        random= rand()%cards_left;
        player1_hand.push_back(deck[random]);
        deck.erase(deck.begin()+random);
        cards_left--;
    }
}

void DealCardsToPlayer2()  //Function to deal 7 cards to player 2
{
    srand(time(0));
    int random = 0;

    for(int i=0; i<7; i++)
    {
        random= rand()%cards_left;

        player2_hand.push_back(deck[random]);

        deck.erase(deck.begin()+random);

        cards_left--;
    }
}

void DealCards() //Function to call DealCardstoPlayer1 & DealCardstoPlayer2
{
    DealCardsToPlayer1();
    DealCardsToPlayer2();
}

void DeckToHandForPlayer1() //Function in which random card from deck goes to player 1's hand.
{
    srand(time(0));

    int random_no= rand()%cards_left;//generates random index number to select a card from deck vector

    player1_hand.push_back(deck[random_no]); //Random Card Goes from Deck to Hand of Player 1

    deck.erase(deck.begin()+random_no);// That same random card is now removed from the deck now.(ERROR= DECK WAS NOT DECLARED IN THIS SCOPE ERROR).

    cards_left--;//cards_left is subtracted by one because random has to be generated between 0 and number of cards left otherwise error aaega.

    //function called for size check in PlayersTurns
    //Cards go to hand from the deck using random number generator.
    //That cards value goes into
    //That card from vector of deck gets pop.back.
    //That card also gets push.back to hand vector.
}

void DeckToHandForPlayer2() //Function in which random card from deck goes to player 1's hand.
{
    srand(time(0));

    int random_no= rand()%cards_left;//generates random index number to select a card from deck vector


    player2_hand.push_back(deck[random_no]); //Random Card Goes from Deck to Hand of Player 2

    deck.erase(deck.begin() + random_no);// That same random card is now erased from the deck now.

    cards_left--; //cards_left is subtracted by one because random has to be generated between 0 and number of cards left otherwise error aaega.

    //function called for size check in PlayersTurns
}

void ShowPlayerCards(int turn)//Function to show the cards in either player's hands
{
    if(turn==1)
    {
        for(int i=0; i<player1_hand.size(); i++)
        {
            AskUser(player1_hand[i]);
            cout<<endl;
        }
    }

    else if(turn==2)
    {
        for(int i=0; i<player2_hand.size(); i++)
        {
            AskUser(player2_hand[i]);
            cout<<endl;
        }
    }
}

void WinnerLoser()//Function to determine which player wins in the case the deck finishes and players still have cards in their respective hands
{
    if(player1_hand.size()<player2_hand.size())
    {
        cout<<"Player 1 Wins!\n";
        cout<<"Player 2 Khair Hogaee!\n";
    }

    else if(player2_hand.size()<player1_hand.size())
    {
        cout<<"Player 2 Wins!\n";
        cout<<"Player 1 Khair Hogaee!\n";
    }
}

void PlayersTurns()//Function for the main game play, turn swapping , decision for winner.
{
    srand(time(0));

    int random = rand()%cards_left;

    playing.push_back(deck1[random]);
    deck.erase(deck.begin() + random);

    string variable1;

    string color_of_pile = playing.back().substr(0,1);
    string type_of_pile = playing.back().substr(1,1);

    string choice = "initial";
    int counter = 0;
    int turn=1;
    int i= playing.size() - 1;


    while(player1_hand.size()!=0 && player2_hand.size()!=0)
    {
        int color_check = 0;
        bool draw = true;

        if(deck.size() == 0)
        {
            draw = false;
        }

        if(turn==1)
        {
            bool check = false;
            bool check2 = false;
            bool check3 = false;

            system("CLS");

            HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 7);
            cout<<"\n-------Player One's Cards------\n\n";
            ShowPlayerCards(turn);

            SetConsoleTextAttribute(color, 7);
            cout<<"\n\n-------Playing Pile-------\n";

            AskUser(playing.back());

            SetConsoleTextAttribute(color, 7);

            cout<<"\n\nPlayer One's Turn:-\n";

            cout<<"\nCurrent Color of Playing Deck: "<<color_of_pile<<endl;
            cout<<"\nCurrent Type of Playing Deck: "<<type_of_pile<<endl;
            cout<<"\nEnter the code of the card that you want to play or enter 'DRA' to draw a card from deck : "; cin>>choice;

            if(choice == "DRA")
            {
                if(!draw)
                {
                    cout<<"The deck is empty now. You can not draw another card";
                    counter++;
                    turn=2;
                }

                else
                {
                    DeckToHandForPlayer1();
                    turn=2;
                }

            }

            else if(choice != "DRA")
            {
                while(!check3)
                {
                    for(int i=0; i<108; i++)
                    {
                        if(choice == CARDS[i])
                        {
                            check3 = true;
                        }
                    }

                    if(!check3)
                    {
                        cout<<"You have entered an invalid choice! Please enter the code of the card you wish to play : "; cin>>choice;
                    }

                }

                while(!check)
                {
                   for(int i=0; i<player1_hand.size(); i++)
                   {
                       if(choice == player1_hand[i])
                       {
                           check = true;
                       }
                   }

                    if(!check)
                    {
                        cout<<"The card you have chosen does not exist in your hand. Please choose another card : "; cin>>choice;
                    }
                }

                while((!check2) && (choice.substr(0,1) != "W"))
                {
                    if((choice.substr(0,1) == color_of_pile) || (choice.substr(1,1) == type_of_pile))//Check if the card you are choosing matches in color or type with the card in the playing pile
                    {
                        check2 = true;
                        MatchInput(choice);
                    }
                    else
                    {
                        check2 = false;
                        cout<<"The selected card has a different color or type than the card in the playing pile! Please choose a card that matches the playing pile's color or type : "; cin>>choice;
                    }
                }

                if (choice.substr(1,1) == "R" || choice.substr(1,1) == "S")
                {
                    for(int j=0; j<player1_hand.size(); j++)
                    {
                        if(choice == player1_hand[j])
                        {
                            player1_hand.erase(player1_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }
                    for(int j=0; j<player1_hand.size(); j++)
                    {
                        if(choice == player1_hand[j])
                        {
                            player1_hand.erase(player1_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }
                    MatchInput(choice);
                    color_of_pile = choice.substr(0,1);
                    type_of_pile = choice.substr(1,1);
                    turn = 1;
                }

                else if (choice.substr(0,1) == "W" && choice.substr(1,1) == "D")
                {
                    color_check = 1;

                    cout<<"Wild Card has been played!\n";

                    cout<<"Which color would you like to change the playing pile to ? ('Y' for Yellow, 'G' for Green, 'R' for Red, 'B' for Blue) : "; cin>>variable1;

                    while(1)
                    {
                        if(variable1 == "Y")
                        {
                            variable1 = "Y";
                            color_of_pile = "Y";
                            break;
                        }

                        else if(variable1 == "R")
                        {
                            variable1 = "R";
                            color_of_pile = "R";
                            break;
                        }

                        else if(variable1 == "G")
                        {
                            variable1 = "G";
                            color_of_pile = "G";
                            break;
                        }

                        else if(variable1 == "B")
                        {
                            variable1 = "B";
                            color_of_pile = "B";
                            break;
                        }

                        else
                        {
                            cout<<"You have not entered an invalid color! Please choose a color from the given choices : "; cin>>variable1;
                        }

                    }

                    cout<<"\nColor of the playing pile has been changed to "<<variable1<<"!";

                    for(int j=0; j<player1_hand.size(); j++)
                    {
                        if(choice == player1_hand[j])
                        {
                            player1_hand.erase(player1_hand.begin() + j);
                            cout<<"DONE";
                        }

                    cout<<choice<<endl;
                    MatchInput(choice);

                    turn=2;

                    }
                }

                else if (choice.substr(1,1) == "D")//If draw two card is played then Player 2 will get two additional cards
                {
                    cout<<"Draw Two has been played! Player 2 draws two cards from the deck!";

                    for(int i=0; i<2; i++)
                    {
                        if(!draw)
                        {
                            cout<<"The deck is empty now. You can not draw another card";
                            break;
                        }

                        else
                        {
                            DeckToHandForPlayer2();
                        }
                    }

                    for(int j=0; j<player1_hand.size(); j++)
                    {
                        if(choice == player1_hand[j])
                        {
                            player1_hand.erase(player1_hand.begin() + j);
                        }
                    }
                    MatchInput(choice);
                    color_of_pile = choice.substr(0,1);
                    type_of_pile = choice.substr(1,1);
                    turn=2;
                }

                else if (choice.substr(0,1) == "W" && choice.substr(1,1) == "F")
                {
                    color_check = 1;
                    cout<<"Wild Draw Four has been played! Player 2 draws four cards from the deck!";

                    for(int i=0; i<4; i++)
                    {
                        if(!draw)
                        {
                             cout<<"The deck is empty now. You can not draw another card";
                             break;
                        }

                        else
                        {
                            DeckToHandForPlayer2();
                        }
                    }

                    cout<<"Which color would you like to change the playing pile to ? ('Y' for Yellow, 'G' for Green, 'R' for Red, 'B' for Blue) : "; cin>>variable1;

                    while(1)
                    {
                        if(variable1 == "Y")
                        {
                            variable1 = "Y";
                            color_of_pile = "Y";
                            break;
                        }

                        else if(variable1 == "R")
                        {
                            variable1 = "R";
                            color_of_pile = "R";
                            break;
                        }

                        else if(variable1 == "G")
                        {
                            variable1 = "G";
                            color_of_pile = "G";
                            break;
                        }

                        else if(variable1 == "B")
                        {
                            variable1= "B";
                            color_of_pile = "B";
                            break;
                        }

                        else
                        {
                            cout<<"You have not entered an invalid color! Please choose a color from the given choices : "; cin>>variable1;
                        }

                    }

                    cout<<"Color of the playing pile has been changed to "<<variable1<<"!";

                    for(int j=0; j<player1_hand.size(); j++)
                    {
                        if(choice == player1_hand[j])
                        {
                            player1_hand.erase(player1_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }

                    MatchInput(choice);
                    turn=2;
                }

                else
                {
                    for(int j=0; j<player1_hand.size(); j++)
                    {
                        if(choice == player1_hand[j])
                        {
                            player1_hand.erase(player1_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }

                    if(color_check==1)
                    {
                        color_of_pile = variable1;
                    }

                    else if(color_check != 1)
                    {
                        color_of_pile = playing.back().substr(0,1);
                    }
                    type_of_pile= playing.back().substr(1,1);
                    MatchInput(choice);
                    turn=2;
                }
                }

        }

        if(counter == 2)
        {
            WinnerLoser();
            break;
        }

        if(turn==2)
        {
            bool check = false;
            bool check2 = false;
            bool check3 = false;

            system("CLS");

            HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(color, 7);
            cout<<"\n-------Player Two's Cards------\n\n";
            ShowPlayerCards(turn);

            SetConsoleTextAttribute(color, 7);
            cout<<"\n\n-------Playing Pile-------\n";

            AskUser(playing.back());

            SetConsoleTextAttribute(color, 7);

            cout<<"\n\nPlayer Two's Turn:-\n\n";

            cout<<"Current Color of Playing Deck: "<<color_of_pile<<endl;
            cout<<"\nCurrent Type of Playing Deck: "<<type_of_pile<<endl;
            cout<<"\nEnter the code of the card that you want to play or enter 'DRA' to draw a card from deck : "; cin>>choice;

            if(choice == "DRA")
            {
                if(!draw)
                {
                    cout<<"The deck is empty now. You can not draw another card";
                    counter++;
                    turn=1;
                }

                else
                {
                    DeckToHandForPlayer2();
                    turn=1;
                }

            }

            else if(choice != "DRA")
            {
                while(!check3)
                {
                    for(int i=0; i<108; i++)
                    {
                        if(choice == CARDS[i])
                        {
                            check3 = true;
                        }
                    }

                    if(!check3)
                    {
                        cout<<"You have entered an invalid choice! Please enter the code of the card you wish to play : "; cin>>choice;
                    }

                }

                while(!check)
                {
                   for(int i=0; i<player2_hand.size(); i++)
                   {
                       if(choice == player2_hand[i])
                       {
                           check = true;
                       }
                   }

                    if(!check)
                    {
                        cout<<"The card you have chosen does not exist in your hand. Please choose another card : "; cin>>choice;
                    }
                }

                while((!check2) && (choice.substr(0,1) != "W"))
                {
                    if((choice.substr(0,1) == color_of_pile) || (choice.substr(1,1) == type_of_pile))//Check if the card you are choosing matches in color or type with the card in the playing pile
                    {
                        check2 = true;
                        MatchInput(choice);
                    }
                    else
                    {
                        check2 = false;
                        cout<<"The selected card has a different color or type than the card in the playing pile! Please choose a card that matches the playing pile's color or type : "; cin>>choice;
                    }
                }

                if (choice.substr(1,1) == "R" || choice.substr(1,1) == "S")
                {
                    for(int j=0; j<player2_hand.size(); j++)
                    {
                        if(choice == player2_hand[j])
                        {
                            player2_hand.erase(player2_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }
                    for(int j=0; j<player2_hand.size(); j++)
                    {
                        if(choice == player2_hand[j])
                        {
                            player2_hand.erase(player2_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }
                    MatchInput(choice);
                    color_of_pile = choice.substr(0,1);
                    type_of_pile = choice.substr(1,1);
                    turn = 2;
                }

                else if (choice.substr(0,1) == "W" && choice.substr(1,1) == "D")
                {
                    color_check = 1;

                    cout<<"Wild Card has been played!\n";

                    cout<<"Which color would you like to change the playing pile to ? ('Y' for Yellow, 'G' for Green, 'R' for Red, 'B' for Blue) : "; cin>>variable1;

                    while(1)
                    {
                        if(variable1 == "Y")
                        {
                            variable1 = "Y";
                            color_of_pile = "Y";
                            break;
                        }

                        else if(variable1 == "R")
                        {
                            variable1 = "R";
                            color_of_pile = "R";
                            break;
                        }

                        else if(variable1 == "G")
                        {
                            variable1 = "G";
                            color_of_pile = "G";
                            break;
                        }

                        else if(variable1 == "B")
                        {
                            variable1 = "B";
                            color_of_pile = "B";
                            break;
                        }

                        else
                        {
                            cout<<"You have not entered an invalid color! Please choose a color from the given choices : "; cin>>variable1;
                        }

                    }

                    cout<<"Color of the playing pile has been changed to "<<variable1<<"!";

                    for(int j=0; j<player2_hand.size(); j++)
                    {
                        if(choice == player2_hand[j])
                        {
                            player2_hand.erase(player2_hand.begin() + j);
                        }
                    }
                    MatchInput(choice);
                    cout<<"UPDATED\n";
                    turn=1;
                }

                else if (choice.substr(1,1) == "D")//If draw two card is played then Player 2 will get two additional cards
                {
                    cout<<"Draw Two has been played! Player 2 draws two cards from the deck!";

                    for(int i=0; i<2; i++)
                    {
                        if(!draw)
                        {
                            cout<<"The deck is empty now. You can not draw another card";
                            break;
                        }

                        else
                        {
                            DeckToHandForPlayer1();
                        }
                    }

                    for(int j=0; j<player2_hand.size(); j++)
                    {
                        if(choice == player2_hand[j])
                        {
                            player2_hand.erase(player2_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }
                    MatchInput(choice);
                    color_of_pile = choice.substr(0,1);
                    type_of_pile = choice.substr(1,1);
                    turn=1;
                }

                else if (choice.substr(0,1) == "W" && choice.substr(1,1) == "F")
                {
                    color_check = 1;
                    cout<<"Wild Draw Four has been played! Player 2 draws four cards from the deck!";

                    for(int i=0; i<4; i++)
                    {
                        if(!draw)
                        {
                             cout<<"The deck is empty now. You can not draw another card";
                             break;
                        }

                        else
                        {
                            DeckToHandForPlayer1();
                        }
                    }

                    cout<<"Which color would you like to change the playing pile to ? ('Y' for Yellow, 'G' for Green, 'R' for Red, 'B' for Blue) : "; cin>>variable1;

                    while(1)
                    {
                        if(variable1 == "Y")
                        {
                            variable1 = "Y";
                            color_of_pile = "Y";
                            break;
                        }

                        else if(variable1 == "R")
                        {
                            variable1 = "R";
                            color_of_pile = "R";
                            break;
                        }

                        else if(variable1 == "G")
                        {
                            variable1 = "G";
                            color_of_pile = "G";
                            break;
                        }

                        else if(variable1 == "B")
                        {
                            variable1= "B";
                            color_of_pile = "B";
                            break;
                        }

                        else
                        {
                            cout<<"You have not entered an invalid color! Please choose a color from the given choices : "; cin>>variable1;
                        }

                    }

                    cout<<"Color of the playing pile has been changed to "<<variable1<<"!";

                    for(int j=0; j<player2_hand.size(); j++)
                    {
                        if(choice == player2_hand[j])
                        {
                            player2_hand.erase(player2_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }
                    MatchInput(choice);
                    turn=1;
                }

                else
                {
                    for(int j=0; j<player2_hand.size(); j++)
                    {
                        if(choice == player2_hand[j])
                        {
                            player2_hand.erase(player2_hand.begin() + j);
                            cout<<"DONE";
                        }
                    }

                    if(color_check==1)
                    {
                        color_of_pile = variable1;
                    }

                    else if(color_check != 1)
                    {
                        color_of_pile = playing.back().substr(0,1);
                    }
                    type_of_pile= playing.back().substr(1,1);
                    MatchInput(choice);
                    turn=1;
                }
                }

        }

        if(player1_hand.size()==0)
        {
            cout<<"PLAYER 1 WINS!!! PLAYER 2 KHAIR HOGAEE!\n";
        }

        if(player2_hand.size()==0)
        {
            cout<<"PLAYER 1 WINS!!! PLAYER 2 KHAIR HOGAEE!\n";
        }
        if(counter == 2)
        {
            WinnerLoser();
            break;
        }
    }
}



int main()
{
    string select;
    Instructions();

    cout<<"\n\nEnter 'C' to carry on with the game : "; cin>>select;

    while(select != "C")
    {
        cout<<"\nPlease select the right option! Re-enter : "; cin>>select;
    }

    string game;
    do
    {
        cout<<"-------------------------------NEW GAME------------------------------------\n\n";
        UNOdeck();
        UNodeck1();
        DealCards();
        PlayersTurns();
        cout<<"Would you like to play another game? (Type Yes or No) : "; cin>>game;

        if(game == "No")
        {
            break;
        }
        while(game != "Yes")
        {
            cout<<"You have entered an invalid option. Please try again!"; cin>>game;
        }
    }while(game == "Yes");

    cout<<"Game Over!";

    return 0;
}

