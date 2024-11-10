#include<iostream>
using namespace std;

// Declared globally because assist us anywhere
int match_selected, enclosure_selected,ticket_type,adult_no,individual_ticket,family_ticket;
int children_no, age_1=0 , age_2=0 , age_3=0 , age_4=0 , age_5=0;
int CNIC_1,CNIC_2,CNIC_3,CNIC_4,CNIC_5,CNIC_6,CNIC_7,CNIC_8;
double adult_disc=0.0 ,  child_disc=0.0 , price=0.0;
double C_age_disc1=0.0 ,  C_age_disc2=0.0;
int adult_price=0 , child_price=0 , total_price,available_seat;


void summary();

// Used for Taking the CNIC depending upon the adults tickets
void adult_CNIC(){
    switch(adult_no){

        // For one adult selected
        case 1:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        break;

        // For two adult selected
        case 2:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        break;

        // For three adult selected
        case 3:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        cout<<"Please CNIC of 3rd adult: ";
        cin>>CNIC_3;
        break;

        // For four adult selected
        case 4:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        cout<<"Please CNIC of 3rd adult: ";
        cin>>CNIC_3;
        cout<<"Please CNIC of 4th adult: ";
        cin>>CNIC_4;
        break;

        // For five adult selected
        case 5:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        cout<<"Please CNIC of 3rd adult: ";
        cin>>CNIC_3;
        cout<<"Please CNIC of 4th adult: ";
        cin>>CNIC_4;
        cout<<"Please CNIC of 5th adult: ";
        cin>>CNIC_5;
        break;

        // For six adult selected
        case 6:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        cout<<"Please CNIC of 3rd adult: ";
        cin>>CNIC_3;
        cout<<"Please CNIC of 4th adult: ";
        cin>>CNIC_4;
        cout<<"Please CNIC of 5th adult: ";
        cin>>CNIC_5;
        cout<<"Please CNIC of 6th adult: ";
        cin>>CNIC_6;
        break;

        // For seven adult selected
        case 7:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        cout<<"Please CNIC of 3rd adult: ";
        cin>>CNIC_3;
        cout<<"Please CNIC of 4th adult: ";
        cin>>CNIC_4;
        cout<<"Please CNIC of 5th adult: ";
        cin>>CNIC_5;
        cout<<"Please CNIC of 6th adult: ";
        cin>>CNIC_6;
        cout<<"Please CNIC of 7th adult: ";
        cin>>CNIC_7;
        break;

        // For eight adult selected
        case 8:
        cout<<"Please CNIC of 1st adult: ";
        cin>>CNIC_1;
        cout<<"Please CNIC of 2nd adult: ";
        cin>>CNIC_2;
        cout<<"Please CNIC of 3rd adult: ";
        cin>>CNIC_3;
        cout<<"Please CNIC of 4th adult: ";
        cin>>CNIC_4;
        cout<<"Please CNIC of 5th adult: ";
        cin>>CNIC_5;
        cout<<"Please CNIC of 6th adult: ";
        cin>>CNIC_6;
        cout<<"Please CNIC of 7th adult: ";
        cin>>CNIC_7;
        cout<<"Please CNIC of 8th adult: ";
        cin>>CNIC_8;
        break;
    }
}

// Used for Taking the Age of child depending upon the selected number
void child_age(){
    switch(children_no){

        // For two children selected            
        case 2:
        cout<<"Enter the 1st children age: ";
        cin>>age_1;
        cout<<"Enter the 2nd children age: ";
        cin>>age_2;
        break;
        
        // For three children selected
        case 3:
        cout<<"Enter the 1st children age: ";
        cin>>age_1;
        cout<<"Enter the 2nd children age: ";
        cin>>age_2;
        cout<<"Enter 3rd children age: ";
        cin>>age_3;
        break;

        // For four children selected
        case 4:
        cout<<"Enter the 1st children age: ";
        cin>>age_1;
        cout<<"Enter the 2nd children age: ";
        cin>>age_2;
        cout<<"Enter 3rd children age: ";
        cin>>age_3;
        cout<<"Enter 4th children age: ";
        cin>>age_4;
        break;

        // For five children selected
        case 5:
        cout<<"Enter the 1st children age: ";
        cin>>age_1;
        cout<<"Enter the 2nd children age: ";
        cin>>age_2;
        cout<<"Enter 3rd children age: ";
        cin>>age_3;
        cout<<"Enter 4th children age: ";
        cin>>age_4;
        cout<<"Enter 5th children age: ";
        cin>>age_5;
        break;
    }
}

void displayMenu(){
    cout<<"\t----- PSL-09 Match Schedule -----\n "<<
    "1. 27 Feb 2024 --- Islamabad United  Quetta Gladiators --  (Night Match)\n"<<
    "2. 28 Feb 2024 --- Peshawar Zalmi v Lahore Qalandars   --  (Night Match)\n"<<
    "3. 29 Feb 2024 --- Islamabad United v Peshawar Zalmi   --  (Night Match)\n"<<
    "4. 1 Mar 2024  --- Islamabad United v Karachi Kings    --  (Night Match)\n"<<
    "5. 2 Mar 2024  --- Peshawar Zalmi v Karachi Kings      --  (Night Match)\n"<<
    "6. 5 Mar 2024  --- Peshawar Zalmi v Quetta Gladiators  --  (Night Match)\n"<<
    "7. 7 Mar 2024  --- Peshawar Zalmi v Islamabad United   --  (Day Match)\n"<<
    "8. 8 Mar 2024  --- Multan Sultans v Islamabad United   --  (Day Match)"<<endl<<endl;
}

void enclosureMenu(){
    cout<<"\t------ Enclosure Prices W.r.t Timings -----\n"<<
    "Day Matches --->(2 pm - 5:15 pm)                    Night Matches ---> (7 pm - 10:15 pm)\n"
    <<"VIP: Rs.2000                                        VIP: Rs.3000"<<endl
    <<"Premium: Rs.1000                                    Premium: Rs.1500\n"
    <<"First Class: Rs.500                                 First Class: Rs.1000\n"
    <<"General: Rs.250                                     General: Rs.500\n"<<endl;

    cout<<"\t------ Enclosure List ------\n"<<
    "1. Javeed Miandad left Enclosure ( VIP ) with 250 seating capacity\n"<<
    "2. Imran Khan right Enclosure ( VIP ) with 250 seating capacity\n"<<
    "3. Javeed Miandad Enclosure ( Premium ) with 1000 seating capacity\n"<<
    "4. Imran Khan Enclosure ( Premium ) with 1000 seating capacity\n"<<
    "5. Javeed Akhtar Enclosure ( Premium ) with 1000 seating capacity\n"<<
    "6. Azhar Mehmood Enclosure ( Premium ) with 1000 seating capacity\n"<<
    "7. Shoaib Akhthar Enclosure ( First Class ) with 2000 setaing capacity\n"<<
    "8. Sohail Tanveer Enclosure ( First Class ) with 2000 seating capacity\n"<<
    "9. Yasir Arafat Enclosure ( General ) with 2500 seating capacity\n"<<
    "10. Miran Buksch Enclosure ( General ) with 2500 seating capcity\n\n";
}

void ticket_System(){
    switch(ticket_type){

        // Used for family system
        case 1:
        cout<<"Please enter the no of adult(upto 4): ";
        cin>>adult_no;
        cout<<"Please enter the no of children(upto 5): ";
        cin>>children_no;
        if((children_no>1 && children_no<=5) && (adult_no>=1 && adult_no<=4)){
            family_ticket=children_no+adult_no;
            adult_CNIC();
            child_age();
        }
        break;

        // Used for individual system
        case 2:
        cout<<"Please enter the no of adult(upto 8): ";
        cin>>adult_no;
        if(adult_no>=1 && adult_no<=8){
            individual_ticket=children_no+adult_no;
            adult_CNIC();
        }
        break;

        default:
        cout<<"Inavalid Ticket type"<<endl;
    }    
}

// For findig the discounts
void discountSystem(){
    bool highDemand_matches=match_selected==1 || match_selected==3;
    bool nightMatches=match_selected>=1 && match_selected<=6;
    bool dayMatches=match_selected>6 && match_selected<=8;

    // For VIP Class
    if(enclosure_selected==1 || enclosure_selected==2){

        available_seat=rand()%250;
        if((family_ticket || individual_ticket) < available_seat){ 

            // User selected night match  
            if(nightMatches){
                price=3000;

                if(family_ticket>5 || individual_ticket>5){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }

                if(adult_no>5){
                    adult_disc+=(0.02*adult_no);
                    if(adult_disc>0.15){
                        adult_disc=0.15;
                    }
                }
            }
        
            // User selected day match
            else if(dayMatches){
                price=2000;

                if(family_ticket>5 || individual_ticket>5){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }

                if(adult_no>5){
                    adult_disc+=(0.02*adult_no);
                    if(adult_disc>0.15){
                        adult_disc=0.15;
                    }
                }
                // Additional discounts
                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }
            }
        }
    }         
    
    // For Premium Class
    if(enclosure_selected==3 || enclosure_selected==4 || enclosure_selected==5 || enclosure_selected==6){

        available_seat=rand()%1000;
        if((family_ticket || individual_ticket) < available_seat){     
        
            // User selected night match
            if(nightMatches){
                price=1500; 

                if(ticket_type==1){
                    adult_disc+=0.10;
                    child_disc+=0.10;
                }

                if(children_no>1){
                    child_disc+=0.20;
                }

                if(adult_no>4){
                    adult_disc+=0.12;
                    child_disc+=0.12;
                }
            }

            // User selected day match
            else if(dayMatches){
                price=1000;

                if(ticket_type==1){
                    adult_disc+=0.10;
                    child_disc+=0.10;
                }

                if(children_no>1){
                    child_disc+=0.20;
                }

                if(adult_no>4){
                    adult_disc+=0.12;
                    child_disc+=0.12;
                }

                // Additional discounts
                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }
                
            }
        }
    }
    
    // For First Class
    if(enclosure_selected==7 || enclosure_selected==8){

        available_seat=rand()%2000;
        if((family_ticket || individual_ticket) < available_seat){

            // User selected night match
            if(nightMatches){ 
                price=1000;

                if((family_ticket>=3 && family_ticket<=5) || (individual_ticket>=3 || individual_ticket<=5)){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }

                if((family_ticket>=6 && family_ticket<=8) || (individual_ticket>=6 || individual_ticket<=8)){
                    adult_disc+=0.10;
                    child_disc+=0.10;
                }

                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.15;
                    child_disc+=0.15;
                }
            }

            // User selected day match
            else if(dayMatches){ 
                price=500;

                if((family_ticket>=3 && family_ticket<=5) || (individual_ticket>=3 || individual_ticket<=5)){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }

                if((family_ticket>=6 && family_ticket<=8) || (individual_ticket>=6 || individual_ticket<=8)){
                    adult_disc+=0.10;
                    child_disc+=0.10;
                }

                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.15;
                    child_disc+=0.15;
                }

                // Additional discounts
                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }
            }
        }
    }    

    // For General Class
    if(enclosure_selected==9 || enclosure_selected==10){
        
        available_seat=rand()%2500;
        if((family_ticket || individual_ticket) < available_seat){

            // User selected night match
            if(nightMatches){ 
                price=500;

                if((family_ticket>=3 && family_ticket<=5) || (individual_ticket>=3 || individual_ticket<=5)){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }

                if((family_ticket>=6 && family_ticket<=8) || (individual_ticket>=6 || individual_ticket<=8)){
                    adult_disc+=0.10;
                    child_disc+=0.10;
                }

                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.15;
                    child_disc+=0.15;
                }
                
            }

            // User selected day match
            else if(dayMatches){ 
                price=250;

                if((family_ticket>=3 && family_ticket<=5) || (individual_ticket>=3 || individual_ticket<=5)){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }

                if((family_ticket>=6 && family_ticket<=8) || (individual_ticket>=6 || individual_ticket<=8)){
                    adult_disc+=0.10;
                    child_disc+=0.10;
                }

                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.15;
                    child_disc+=0.15;
                }

                // Additional discounts
                if(family_ticket>8 || individual_ticket>8){
                    adult_disc+=0.05;
                    child_disc+=0.05;
                }
            }
        }
    }
     
    
    // For Matches Popular in Public
    if(highDemand_matches){
        // Applying 10 percent surcharge on their ticket price
        price=price*1.1;
    }
 
}

// For more rebates
void progressiveRebates(){

    if(family_ticket>6){
        adult_disc+=0.05;
        child_disc+=0.05;
    }

    // For Child 1st
    if(age_1>=1 && age_1<5){
        C_age_disc1+=0.30;
    }
    else if(age_1>=5 && age_1<=10){
        C_age_disc2+=0.25;
    }

    // For Child 2nd
    if(age_2>=1 && age_2<5){
        C_age_disc1+=0.30;
    }
    else if(age_2>=5 && age_2<=10){
        C_age_disc2+=0.25;
    }

    //For 3rd Child
    if(age_3>=1 && age_3<5){
        C_age_disc1+=0.30;
    }
    else if(age_3>=5 && age_3<=10){
        C_age_disc2+=0.25;
    }

    //For 4th Child
    if(age_4>=1 && age_4<5){
        C_age_disc1+=0.30;
    }
    else if(age_4>=5 && age_4<=10){
        C_age_disc2+=0.25;
    }

    // For 5th Child
    if(age_5>=1 && age_5<5){
        C_age_disc1+=0.30;
    }
    else if(age_5>=5 && age_5<=10){
        C_age_disc2+=0.25;
    }
}

int main(){
    // To show the Match Schedule
    displayMenu();
    cout<<"Enter Match Selected(1 to 8): ";
    cin>>match_selected;

    // For Enclosure type
    enclosureMenu();
    cout<<"Enter the selected enclosure(1 to 10): ";
    cin>>enclosure_selected;

    cout<<"\nWhich ticket type you want to choose?\n"<<
    "1. Family Ticket \n2.Individual Ticket"<<endl;
    cout<<"Ticket type Selected(1 or 2): ";
    cin>>ticket_type;

    // For selecting the type of ticket
    ticket_System();

    // Extracting the discounts
    discountSystem();

    // Applying the rebates
    progressiveRebates();

    // Adult tickets final prize
    adult_price=(1-adult_disc)*(adult_no*price);

    // Children tickets final prize
    child_price=(C_age_disc1*price) + (C_age_disc2*price);
    child_price=(children_no*price) - child_price;
    child_price=(1 - child_disc)*child_price;

    // Finalizing the total prize and summary also 
    total_price=adult_price+child_price;
    
    cout<<"\n\nThe price of the ticket after discount is "<<total_price<<endl;
    summary();

    return 0;
}

void summary(){
    switch(match_selected){

        case 1:
        cout<<"You selected match 1 i.e, Islamabad United v Quetta Gladiators"<<endl;
        break;

        case 2:
        cout<<"You selected match 2 i.e, Peshawar Zalmi v Lahore Qalandars"<<endl;
        break;

        case 3:
        cout<<"You selected match 3 i.e, Islamabad United v Peshawar Zalmi"<<endl;
        break;

        case 4:
        cout<<"You selected match 4 i.e, Islamabad United v Karachi Kings"<<endl;
        break;

        case 5:
        cout<<"You selected match 5 i.e, Peshawar Zalmi v Karachi Kings"<<endl;
        break;

        case 6:
        cout<<"You selected match 6 i.e, Peshawar Zalmi v Quetta Gladiators"<<endl;
        break;

        case 7:
        cout<<"You selected match 7 i.e, Peshawar Zalmi v Islamabad United"<<endl;
        break;

        case 8:
        cout<<"You selected match 8 i.e, Multan Sultans v Islamabad United"<<endl;
        break;

        default:
        cout<<"Invalid match entered "<<endl;
    }

    switch(enclosure_selected){

        case 1:
        cout<<"You selected Javeed Miandad left Enclosure ( VIP ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 2:
        cout<<"You selected Imran Khan right Enclosure ( VIP ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 3:
        cout<<"You selected Javeed Miandad Enclosure ( Premium ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 4:
        cout<<"You selected Imran Khan Enclosure ( Premium ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 5:
        cout<<"You selected Javeed Akhtar Enclosure ( Premium ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 6:
        cout<<"You selected Azhar Mehmood Enclosure ( Premium ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 7:
        cout<<"You selected Shoaib Akhthar Enclosure ( First Class ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 8:
        cout<<"You selected Sohail Tanveer Enclosure ( First Class ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 9:
        cout<<"You selected Yasir Arafat Enclosure ( General ) with "<<available_seat<<" available seats"<<endl;
        break;

        case 10:
        cout<<"You selected Miran Buksch Enclosure ( General ) with "<<available_seat<<" available seats"<<endl;
        break;

        default:
        cout<<"Invalid enclosure selected"<<endl;    

    }

    if(ticket_type==1){
        cout<<"You opt for family system"<<endl;
        cout<<"You have in total "<<family_ticket<<" tickets"<<endl;
        cout<<"The children and adult in your group is "<<children_no<<" and "<<adult_no<<"respectively"<<endl;
    }

    else if(ticket_type==2){
        cout<<"You opt for individual system"<<endl;
        cout<<"You have in total "<<individual_ticket<<" tickets"<<endl;
        cout<<"The adult in your group is "<<adult_no<<endl;
    }

    switch(adult_no){
        case 1:
        cout<<"The CNIC is "<<CNIC_1<<endl;
        break;

        case 2:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<endl;
        break;

        case 3:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<","<<CNIC_3<<endl;
        break;

        case 4:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<","<<CNIC_3<<","<<CNIC_4<<endl;
        break;

        case 5:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<","<<CNIC_3<<","<<CNIC_4<<","<<CNIC_5<<endl;
        break;

        case 6:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<","<<CNIC_3<<","<<CNIC_4<<","<<CNIC_5<<","<<CNIC_6<<endl;
        break;

        case 7:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<","<<CNIC_3<<","<<CNIC_4<<","<<CNIC_5<<","<<CNIC_6<<","<<CNIC_7<<endl;
        break;

        case 8:
        cout<<"The CNIC are "<<CNIC_1<<","<<CNIC_2<<","<<CNIC_3<<","<<CNIC_4<<","<<CNIC_5<<","<<CNIC_6<<","<<CNIC_7<<","<<CNIC_8<<endl;
        break;

        default:
        cout<<"Invalid no of the adults entered"<<endl;
    }

}