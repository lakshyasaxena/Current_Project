//////////////////////////////////////////////////////////////////////////////////////
//88888888888888888888888888888888888888
#include <bits/stdc++.h>
#include "special_attributes.h"
#include "special_functions.h"



#define message_box msb
#define message mm
#define object_of_main_menu1 omm1
#define object_type_one_menu otom
#define visual_display v_d
#define unique_names_of_identifiers unoi
#define set_of_containers sofc
#define set_of_initializers sofi
#define set_of_all_attributes sofaa




using namespace std;
using namespace special_attributes;
using namespace special_functions;
typedef long long ll;
typedef long l;





class main_menu
{
private:
    static string choice;  // type (class variable)  of main_class
public:
    void welcome();
    void header();
    void menu();
    void message_box();
    void undo();
    void jump_to_main();
    void message(short);
    friend void function_of_object_one();
    static void set_choice();
    static void set_dafault_choice_exe();
    main_menu() // default constructor
    {}
    ~main_menu()  // default deconstructor
    {}
};
string main_menu::choice="default_choice_404";  // type (class variable)  of main_class
void main_menu::set_choice()
{   string str;   cin>>str;    choice=str; }
void main_menu::set_dafault_choice_exe()
{ choice="exe";}




class object_type_one_menu:public main_menu  //parent of object_one , child of main_menu
{
public:
    void object_display(short);            //  function overloading
    void object_display(short,string&);     //  function overloading
    void object_display(short,string&,ll&);  //  function overloading
    void object_display(short,string&,ll&,vector <string>&);      //  function overloading
    void object_display(short,string&,ll&,vector <string>&,short&,vector <pair<short,string>>&);      //  function overloading
    void otom_phase00();          // for phase zero state zero
    void otom_phase01(string&);    // for phase zero state one
    void otom_phase02(string&);    // for phase zero state two
    void otom_phase13(string&,ll&);  // for phase one state three
    void otom_phase14_1(string&,ll&);  // for phase one state four part1
    void otom_phase14_2(short); //note: (not referenced because use to destroy initializers)  // for phase one state four part2
    void otom_phase14_3(vector <string>&); // for phase one state four part3
    void otom_phase15_1(string&,ll&,vector <string>&);  // for phase one state five part 1
    void otom_phase16_1(string &str,ll &t,vector <string> &v1,short&,vector <pair<short,string>>&);      // for phase one state six part 1
};




class object_one:public otom // child class of object_type_one_menu and grand child of main_menu (MULTIPLE INHERITANCE)
{
private:
    string name_of_object="";
    string state="state0";
    ll test_cases=1;   //default set to one
    short no_of_initializers=0;
    short no_of_containers=1;
    vector <pair <short,string>> set_of_initializers;    // short_name -> sofi
    vector <string> unique_names_of_identifiers;         // short_name -> unoi
    vector <string> set_of_containers;                   // short_name -> sofc
    vector <pair <short,string>> containers;
    vector <pair<short,string>> print_containers;
    vector <tuple<bool,short,short,string>> set_of_all_attributes;  // short_name -> sofaa
public:
    short incrementer=0;
    string choice1="";
    bool check_the_test_case_range02(string&);  // for phase zero state two
    bool check_the_initializers_choice_range13(string&);  // for phase one state three
    bool check_if_identifier_exist();          // for phase one state three (general use)
    bool valid_length_of_initializers14();      // for phase one state four
    void delete_all_initializers15();           //for phase one state five
    string type_of_container16(short);            // for phase one state six
    short count_nth_container16(string&);          //for phase one state six
    void get_correct_print_container16(pair<short,string>&);    //for phase one state six
    void delete_all_containers();            // for phase one state six
    void name_the_object00();                  // for phase zero state zero
    void main_controller();
    object_one()  // constructor
    {
        name_of_object="";
        test_cases=1;
        state="state0";
        choice1="";
        no_of_initializers=0;
        no_of_containers=1;
        incrementer=0;
    }
};




void function_of_object_one(); // friend function of class main menu





int main()
{
  short initial_fg_color = getfgcolor();
  short initial_bg_color = getbgcolor();
  sfc(ww);
  main_menu object_of_main_menu1;
  // for setting font color        use sfc( color_name ) function
  // for setting background color  use sbg( color_name ) function
  /*
  colors available are:
  black,        -->> bb
  dark_blue,    -->> db
  dark_green,   -->> dg
  dark_cyan,    -->> dc
  dark_red,     -->> dr
  dark_magenta, -->> dm
  dark_yellow,  -->> dy
  light_gray,   -->> lgg
  dark_gray,    -->> dgg
  light_blue,   -->> lb
  light_green,  -->> lg
  light_cyan,   -->> lc
  light_red,    -->> lr
  light_magenta,-->> lm
  light_yellow, -->> lyobject_of_main_menu1
  white         -->> ww
  */
  // for arranging the coordinates use gxy( x_coordinates, y_coordinates  )  function
  omm1.welcome();
  omm1.menu();
  return 0;
}





void main_menu::welcome()
{
  sfc(ww);gxy(5,5);
  cout<<"WELCOME TO TEST CASE GENERATOR (version 1.1)\n\n\n";
  cout<<"     Press ";  sbc(dr);sfc(lr);
  cout<<" ENTER ";sbc(bb);sfc(ww);
  cout<<" to continue";
  getch();
  system("CLS");
}




void main_menu::header()
{
    gxy(0,0);sbc(dm);
    printf("TEST CASE GENERATOR ");sfc(dgg);
    printf("Version (1.1)                     ");sfc(ww);
    printf("Type ");sfc(lr);printf("exe");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" to");sbc(dr);printf(" Exit");sbc(bb);
    printf("\n\n  ");
}





void main_menu::menu()
{
    while(1)
    {
    header();
    printf("MAIN MENU\n\n");
    printf("1. OBJECT TYPE TEST CASES");printf("     ");sbc(dr);sfc(ww);printf("press ");sfc(lr);printf("1");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" \n");sbc(bb);sfc(ww);
    printf("\n2. QUERIES TYPE TEST CASES");printf("    ");sbc(dr);sfc(ww);printf("press ");sfc(lr);printf("2");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" \n");sbc(bb);sfc(ww);
    printf("\n3.(NEW USER) Learn how to create TEST CASES in this software ");sbc(dr);sfc(ww);printf("press ");sfc(lr);printf("3");sfc(ww);printf(" and ");sfc(lr);printf("ENTER");sfc(ww);printf(" \n");sbc(bb);sfc(ww);
    msb();mm(1);
    set_choice();
    if(choice=="1")
    {
        function_of_object_one();
        system("cls");
    }
    else if(choice=="2")
    {
        cout<<"IN Progress";
        system("cls");
    }
    else if(choice=="3")
    {
        cout<<"IN Progress";
        system("cls");
    }
    else if(choice=="exe")
    {
        break;
    }
    else
    {
        mm(2);
    }
    if(choice=="exe")
    {
        break;
    }
    }
}




void main_menu::msb()
{
    gxy(0,20);sbc(dr);
    printf("MESSAGE BOX\n\n");sbc(bb);
}





void main_menu::undo()
{
    gxy(54,1);
    printf("Type ");sfc(lr);printf("und");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to ");sbc(lgg);printf("UNDO");sbc(bb);
}




void main_menu::jump_to_main()
{
    gxy(1,1);
    printf("Type ");sfc(lr);printf("min");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to go back to MAIN MENU");
}





void main_menu::mm(short ch)
{
    switch (ch)
    {
    case 1:
        {
            gxy(5,22);printf("ENTER YOUR CHOICE ->   ");
            break;
        }
    case 2:
        {
            gxy(5,23);printf("Please enter a valid choice, now  press ");sbc(dr);printf("ENTER");sbc(bb);printf(" key");
            getch();
            system("cls");
            break;
        }
    case 3:
        {
            gxy(5,21);printf("You are in PHASE ZERO");printf(". Give a name to your object");
            break;
        }
    case 4:
        {
            gxy(5,7);printf("Name your object -> ");
            break;
        }
    case 5:
        {
            gxy(5,22);printf("Nothing to undo in phase zero");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue");
            break;
        }
    case 6:
        {
            gxy(5,22);printf("Please provide a smaller name of object");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue");
            break;
        }
     case 7:
        {
            gxy(0,7);printf("Do you want to create multiple copies of your object");
            printf("\n\n  ");
            printf("If YES then type ");sfc(lr);printf("yes");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);
            printf("\n\n  ");
            printf("If  NO then type  ");sfc(lr);printf("no");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);
            break;
        }
     case 8:
        {
            gxy(1,8);printf("How many copies would you like to create");
            break;
        }
     case 9:
        {
            gxy(2,22);printf("Only valid integers in range [1 - 1000000] are possible");
            break;
        }
     case 10:
        {
            gxy(1,7);printf("Insert ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" into your object");
            gxy(1,9);printf("You can add from range [0 to 10] ");sfc(ly);printf("INITIALIZERS");sfc(ww);
            gxy(1,11);sfc(lr);printf("NOTE: ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" can be only of INTEGER TYPE");
            gxy(1,13);printf("How many ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" would you like to add ?");
            break;
        }
     case 11:
        {
            gxy(2,22);printf("You can add ");sfc(ly);printf("INITIALIZERS");sfc(ww);printf(" in range of [0 - 10] ");
            break;
        }
     case 12:
        {
            gxy(1,6);printf("Give unique names to your ");sfc(ly);printf("INITIALIZERS");sfc(ww);
            gxy(1,7);sfc(lr);printf("NOTE: ");sfc(ww);printf("Length of names should be less then 5 character");
            break;
        }
     case 13:
        {
            gxy(2,22);printf("The name of ");sfc(ly);printf("INITIALIZER");sfc(ww);printf(" has to be less then 5 characters");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue");
            break;
        }
     case 14:
        {
            gxy(2,22);printf("This name of IDENTIFIER has been already used, try a different name");
            gxy(5,23);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue");
            break;
        }
     case 15:
        {
            gxy(1,7);printf("Insert ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" into your object");
            gxy(1,9);printf("You can add from range [1 to 10] ");sfc(lg);printf("CONTAINERS");sfc(ww);
            gxy(1,11);printf("How many ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" would you like to add ?");
            break;
        }
    case 16:
        {
            gxy(2,22);printf("You can add ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" in range of [1 - 10] ");
            break;
        }
    case 17:
        {
            gxy(1,5);printf("Type the corresponding key and ");sbc(dr);printf("ENTER");sbc(bb);printf(" to add ");sfc(lg);printf("CONTAINER");sfc(ww);
            gxy(1,6);printf("List of ");sfc(lg);printf("CONTAINERS\n");sfc(ww);
            printf("1. INTEGER ->");printf("  type ");sfc(lr);printf("1");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("2. REAL    ->");printf("  type ");sfc(lr);printf("2");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("3. ARRAY   ->");printf("  type ");sfc(lr);printf("3");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("4. STRING  ->");printf("  type ");sfc(lr);printf("4");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("5. MATRIX  ->");printf("  type ");sfc(lr);printf("5");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("6. TREE    ->");printf("  type ");sfc(lr);printf("6");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("7. GRAPH   ->");printf("  type ");sfc(lr);printf("7");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            printf("8. CUSTOM_data_type -> ");printf("  type ");sfc(lr);printf("8");sfc(ww);printf(" and ");sbc(dr);printf("ENTER");sbc(bb);printf("\n");
            break;
        }
    case 18:
        {
            gxy(2,21);printf("Add ");sfc(lg);printf("CONTAINERS");sfc(ww);printf(" by typing the keys in range [1 - 7] ");
            break;
        }
    case 19:
        {
            gxy(3,3);sfc(lc);printf("Bravo");sfc(ww);gxy(3,4);printf("You have successfully completed ");sbc(dy);printf("PHASE ONE");sbc(bb);printf(" and ");
            sbc(dy);printf("PHASE TWO");sbc(bb);
            gxy(3,6);printf("Now you are moving towards ");sbc(dy);printf("PHASE THREE");sbc(bb);
            gxy(3,8);printf("In this phase you have to arrange positions of attributes in your object");
            gxy(3,10);printf("You are advised to ");sfc(lc);printf("MAXIMIZE");sfc(ww);printf(" you screen to have complete display");
            gxy(3,12);printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue...");
            break;
        }
    case 20:
        {
            gxy(3,3);sfc(lc);printf("Nice");sfc(ww);gxy(3,4);printf("You have successfully completed ");sbc(dy);printf("PHASE ONE");sbc(bb);
            gxy(3,6);printf("Now you are moving towards ");sbc(dy);printf("PHASE TWO");sbc(bb);
            gxy(3,8);printf("In this phase you have to add attributes in your object");
            gxy(3,9);printf("You may add two types of attributes\n\n");
            sfc(ly);printf("INITILIZERS");sfc(ww);printf(" -> These are used to provide values to data types like\n");sfc(lc);
            printf("               (size of ARRAY[])\n");
            printf("               (size of MATRIX[][])\n");
            printf("               (size of STRING{})\n");
            printf("               (nodes in TREE())\n");
            printf("               (nodes in GRAPH())\n\n");sfc(ww);
            sfc(lg);printf("CONTAINERS");sfc(ww);printf(" -> These are set of primitive data types\n");
            printf("\n");printf("Press ");sbc(dr);printf("ENTER");sbc(bb);printf(" to continue...");
            break;
        }
    }
}









void function_of_object_one()
{
    system("cls");
    //cout<<"you are in object 1 class\n";
    object_one o1;
    o1.main_controller();
    if(o1.choice1=="exe") { main_menu::set_dafault_choice_exe(); }
}







void otom::object_display(short ch)
{
    switch(ch)
    {
    case 0:
        {
            gxy(60,4);
            printf("Empty Object");
            gxy(59,5);printf("[            ]");
            break;
        }
    }
}





void otom::object_display(short ch,string &str)
{
    switch(ch)
    {
    case 1:
        {
            gxy(60,4);
            cout<<str<<"\n";
            gxy(59,5);printf("[          ]");
            break;
        }
    }
}






void otom::object_display(short ch,string &str,ll &t)
{
    switch(ch)
    {
    case 3:
        {
            gxy(60,4);
            cout<<str<<"\n";
            gxy(59,5);printf("[ T = ");cout<<t;printf(" ]");
            break;
        }
    }
}








void otom::object_display(short ch,string &name_of_object,ll &test_case_size,vector <string> &v1)    // overloaded function
{
    switch(ch)
    {
    case 4:
        {
            gxy(60,4);
            cout<<name_of_object<<"\n";
            gxy(59,5);printf("[ T = ");cout<<test_case_size;printf(" ]");
            gxy(60,7);sfc(ly);printf("INITIALIZERS");sfc(ww);
            if(v1.size()==1) { gxy(58,8);printf("(no initializers)");return;}
            short set_y_axis=7;
            for(short i=1;i<v1.size();i++)
            {
                gxy(61,++set_y_axis);cout<<v1[i];
            }
        }
    }
}






void otom::object_display(short ch,string &str,ll &t,vector <string> &v1,short &n,vector <pair<short,string>> &v2)
{
    switch(ch)
    {
    case 5:
        {
            gxy(60,4);
            cout<<str<<"\n";
            gxy(59,5);printf("[ T = ");cout<<t;printf(" ]");
            gxy(60,7);sfc(ly);printf("INITIALIZERS");sfc(ww);
            short set_y_axis=7;
            if(n==0)
            {
                gxy(58,8);printf("(no initializers)");
                set_y_axis+=2;
            }
            else
            {
                for(short i=1;i<=n;i++)
                    {
                        gxy(61,++set_y_axis);cout<<v1[i];
                    }
                set_y_axis++;
            }
            gxy(60,++set_y_axis);sfc(lg);printf("CONTAINERS");sfc(ww);
            for(short i=0;i<v2.size();i++)
            {
                gxy(61,++set_y_axis);cout<<(i+1);printf("-> ");cout<<v2[i].second;
            }
        }
    }
}








void otom::otom_phase00()
{
    header();msb();mm(3);undo();jump_to_main();object_display(0);
    gxy(2,3);sbc(dy);printf("PHASE ZERO");sbc(bb);printf("-> Creating an Empty Object");mm(4);
    mm(1);
}






void otom::otom_phase01(string &str)
{
    header();msb();undo();jump_to_main();object_display(1,str);
    gxy(2,3);sbc(dy);printf("PHASE ZERO");sbc(bb);printf("-> Creating an Empty Object");mm(7);mm(1);
}





void otom::otom_phase02(string &str)
{
    header();msb();undo();jump_to_main();object_display(1,str);
    gxy(2,3);sbc(dy);printf("PHASE ZERO");sbc(bb);printf("-> Creating an Empty Object");mm(8);mm(1);
}




void otom::otom_phase13(string &str,ll &t)
{
    header();msb();undo();jump_to_main();object_display(3,str,t);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(10);mm(1);
}





void otom::otom_phase14_1(string &str,ll &t)
{
    header();msb();undo();jump_to_main();object_display(3,str,t);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(12);
}





void otom::otom_phase14_2(short copy_of_no_of_initilizers)
{
    int si=8;  //  si stands for starting_index
    int sn=0; // sn stands for starting_number
    while(copy_of_no_of_initilizers--)
    {
        sn++;
        gxy(1,++si);if(sn==10) {gxy(0,si);}cout<<sn;printf(" ->");
    }
}





void otom::otom_phase14_3(vector <string> &str)
{
    if(str.size()==1) return;
    short si=8;  //  si stands for starting_index
    for(short i=1;i<str.size();i++)
    {
        gxy(6,++si);cout<<str[i];
    }
}





void otom::otom_phase15_1(string &str,ll &t,vector <string> &v1)
{
    header();msb();undo();jump_to_main();object_display(4,str,t,v1);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(15);mm(1);
}






void otom::otom_phase16_1(string &str,ll &t,vector <string> &v1,short &n,vector <pair<short,string>> &v2)
{
    header();msb();undo();jump_to_main();object_display(5,str,t,v1,n,v2);
    gxy(2,3);sbc(dy);printf("PHASE ONE");sbc(bb);printf("-> Adding ATTRIBUTES in Object");mm(17);mm(18);
}









bool object_one::check_the_test_case_range02(string &temp)
{
    if(temp.size()>7)
        return false;
    bool check=all_integers(temp);
    return check;
}





bool object_one::check_the_initializers_choice_range13(string &temp)
{
     if(temp.size()>2)
        return false;
    bool check=all_integers(temp);
    return check;
}




void object_one::name_the_object00()
{
    name_of_object=choice1;
    unoi.push_back(choice1);
    state="state1";
}





bool object_one::check_if_identifier_exist()  //general use
{
    for(short i=0;i<unoi.size();i++)
    {
        if(choice1==unoi[i]) return false;
    }
    return true;
}






bool object_one::valid_length_of_initializers14()
{
    if(choice1.size()>5) return false;
    return true;
}





void object_one::delete_all_initializers15()
{
    sofi.clear();
    while(unoi.size()!=1)
    {
        unoi.pop_back();
    }
    no_of_initializers=0;
}






string object_one::type_of_container16(short ch)
{
    switch(ch)
    {
        case 1: {return "i";}
        case 2: {return "r";}
        case 3: {return "a";}
        case 4: {return "s";}
        case 5: {return "m";}
        case 6: {return "t";}
        case 7: {return "g";}
        case 8: {return "c";}
    }
    return "";// for exception handling
}






short object_one::count_nth_container16(string &str)
{
    short countt=0;
    for(short i=0;i<sofc.size();i++)
    {
        if(str==sofc[i]) countt++;
    }
    return countt;
}






void object_one::get_correct_print_container16(pair<short,string> &p1)
{
    string str="",&temp=p1.second,number=positive_number_to_string(p1.first);
    if(temp=="i")
    {
        str+="INTEGER_";
        str+=number;
    }
    if(temp=="r")
    {
        str+="REAL_";
        str+=number;
        str+=".()";
    }
    if(temp=="a")
    {
        str+="ARRAY_";
        str+=number;
        str+="[]";
    }
    if(temp=="s")
    {
        str+="STRING_";
        str+=number;
        str+="()";
    }
    if(temp=="m")
    {
        str+="MATRIX_";
        str+=number;
        str+="[][]";
    }
    if(temp=="t")
    {
        str+="TREE_";
        str+=number;
        str+="()()";
    }
    if(temp=="g")
    {
        str+="GRAPH_";
        str+=number;
        str+="()()";
    }
    if(temp=="c")
    {
        str+="CUSTOM_";
        str+=number;
        str+="{}";
    }
    temp=str;
}







void object_one::delete_all_containers()     ////phase and state yet to be decided.................................................................................
{
    containers.clear();
    print_containers.clear();
    sofc.clear();
    no_of_containers=1;
}






void object_one::main_controller()    // main controller function
{
    while(1)
    {
        // state 0
        if(state=="state0")  // name the object
        {
            system("cls");
            otom_phase00();
            cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und") {mm(5);getch();}
            else if(choice1=="exe") { break; }
            else if(choice1.size()>10) {system("cls");otom_phase00();mm(6);getch();continue;}
            else
            { name_the_object00(); }
        }

        // state1
        if(state=="state1")   // does it have test cases
        {
            system("cls");
            otom_phase01(name_of_object);
            cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und")
            {
                unoi.pop_back();
                state="state0";
                continue;
            }
            else if(choice1=="exe") { break; }
            else if(choice1=="yes")
            {
                state="state2";
            }
            else if(choice1=="no")
            {
                state="state03_message";
            }
            else { system("cls"); otom_phase01(name_of_object); mm(2); }
        }

        // state 2
        if(state=="state2")     // if yes, how many
        {
            system("cls");
            otom_phase02(name_of_object);
            cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und")
            {
                state="state1";
                continue;
            }
            else if(choice1=="exe") { break; }
            else
            {
                bool check=check_the_test_case_range02(choice1);
                if(check==false)
                {
                    system("cls");
                    otom_phase02(name_of_object);
                    mm(9);mm(2);
                    continue;
                }
                ll int_checker=string_to_integer_converter(choice1);
                if(int_checker<=0||int_checker>1000000)
                {
                    system("cls");
                    otom_phase02(name_of_object);
                    mm(9);mm(2);
                    continue;
                }
                else
                {
                    test_cases=string_to_integer_converter(choice1);
                    state="state03_message";
                }
            }
        }



        if(state=="state03_message")
        {
            system("cls");
            mm(20);getch();
            state="state3";
        }

        // phase 1 starts from here
        // state 3                           how many initializers does it have
        if(state=="state3")
        {
            system("cls");
            otom_phase13(name_of_object,test_cases);
            cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und")
            {
                state="state1";
                test_cases=1;
                continue;
            }
            else if(choice1=="exe") { break; }
            else
            {
                bool check=check_the_initializers_choice_range13(choice1);
                if(check==false)
                {
                    system("cls");
                    otom_phase13(name_of_object,test_cases);
                    mm(11);mm(2);
                    continue;
                }
                ll int_checker=string_to_integer_converter(choice1);
                if(int_checker>10)
                {
                    system("cls");
                    otom_phase13(name_of_object,test_cases);
                    mm(11);mm(2);
                    continue;
                }
                else
                {
                    no_of_initializers=string_to_integer_converter(choice1);
                    state="state4";
                }

              }
        }

        //state4;                         // name the initializers
        if(state=="state4")
        {
            incrementer=0;
            for(short i=1;i<=no_of_initializers;i++)
            {
                system("cls");
                otom_phase14_1(name_of_object,test_cases);
                otom_phase14_2(no_of_initializers);
                otom_phase14_3(unoi);mm(1);
                cin>>choice1;
                if(choice1=="min") break;
                else if(choice1=="exe") { break; }
                else if(choice1=="und")
                {
                    if(i==1) break;
                    else { unoi.pop_back();i-=2;continue; }
                }
                else
                {
                    bool check=valid_length_of_initializers14();
                    if(check==false)
                    {
                        mm(13);getch();--i;continue;
                    }
                    check=check_if_identifier_exist(); // general for all
                    if(check==false)
                    {
                        mm(14);getch();--i;continue;
                    }
                    unoi.push_back(choice1);
                    pair <short,string> p1;
                    p1=make_pair(--incrementer,choice1);
                    sofi.push_back(p1);
                }
            }




            if(choice1=="min") break;
            else if(choice1=="und")
            {
                state="state3";
                continue;
            }
            else if(choice1=="exe") { break; }
            state="state5";
        }


        // state 5                how many containers dose it have
        if(state=="state5")
        {
            system("cls");
            otom_phase15_1(name_of_object,test_cases,unoi);
            cin>>choice1;
            if(choice1=="min") break;
            else if(choice1=="und")
            {
                delete_all_initializers15();
                state="state4";continue;
            }
            else if(choice1=="exe") { break; }
            else
            {
                bool check=check_the_initializers_choice_range13(choice1);  // same functionality, so using this function
                if(check==false)
                {
                    system("cls");
                    otom_phase15_1(name_of_object,test_cases,unoi);
                    mm(16);mm(2);
                    continue;
                }
                ll int_checker=string_to_integer_converter(choice1);
                if(int_checker<=0 || int_checker>10)
                {
                    system("cls");
                    otom_phase15_1(name_of_object,test_cases,unoi);
                    mm(16);mm(2);
                    continue;
                }
                else
                {
                    no_of_containers=string_to_integer_converter(choice1);
                    state="state6";
                }

              }
        }


        // state 6
        if(state=="state6")
        {

            for(short i=1;i<=no_of_containers;i++)
            {
                system("cls");
                otom_phase16_1(name_of_object,test_cases,unoi,no_of_initializers,print_containers);mm(1);
                cin>>choice1;
                if(choice1=="min") break;
                else if(choice1=="und")
                {
                    if(i==1) { break; }
                    else
                    {
                        containers.pop_back();
                        print_containers.pop_back();
                        sofc.pop_back();i-=2;
                        continue;
                    }
                }
                else if(choice1=="exe") { break; }
                else
                {
                    bool check=check_the_initializers_choice_range13(choice1);   // same functionality so using this function again
                    if(check==false)
                        {
                            system("cls");
                            otom_phase16_1(name_of_object,test_cases,unoi,no_of_initializers,print_containers);
                            mm(2);--i;
                            continue;
                        }
                    ll int_checker=string_to_integer_converter(choice1);
                    if(int_checker<=0 || int_checker>=9)
                        {
                            system("cls");
                            otom_phase16_1(name_of_object,test_cases,unoi,no_of_initializers,print_containers);
                            mm(2);--i;
                            continue;
                        }
                    else
                        {
                            string name_of_container=type_of_container16(int_checker);
                            sofc.push_back(name_of_container);
                            short nth_number_of_container=count_nth_container16(name_of_container);
                            pair <short,string> p1;
                            p1=make_pair(nth_number_of_container,name_of_container);
                            //p1.first=nth_number_of_container;
                            //p1.second=name_of_container;
                            containers.push_back(p1);
                            get_correct_print_container16(p1);
                            print_containers.push_back(p1);
                        }
                 }
            }


            if(choice1=="min") break;
            else if(choice1=="und")
            {
                //delete_all_containers16();
                state="state5";continue;
            }
            else if(choice1=="exe") { break; }
            state="state07";
        }



        if(state=="state07")
        {
            system("cls");
            mm(19);
            getch();
            state="state7";
        }



        // phase 3 state 7
        if(state=="state7")
        {
            cout<<"Reached successfully\n";


            //vector <tuple<bool,short,short,string>> set_of_all_attributes;  // short_name -> sofaa
            incrementer=0;
            short incrementer2=0;
            for(short i=0;i<sofi.size();i++)
            {
                cout<<sofi[i].first<<"  "<<sofi[i].second<<"\n";
            }
            for(short i=0;i<sofi.size();i++)
            {
                cout<<sofi[i].first<<"  "<<sofi[i].second<<"\n";
                sofaa.push_back(make_tuple(false,--incrementer2,++incrementer,sofi[i].second));
            }
            cout<<"\n\n\n";
            for(short i=0;i<containers.size();i++)
            {
                cout<<containers[i].first<<"  "<<containers[i].second<<"\n";
                sofaa.push_back(make_tuple(false,containers[i].first,++incrementer,print_containers[i].second));
            }
            cout<<"\n\n";
            for(short i=0;i<sofaa.size();i++)
            {
                cout<<get<0>(sofaa[i])<<"  "<<get<1>(sofaa[i])<<"  "<<get<2>(sofaa[i])<<"  "<<get<3>(sofaa[i])<<"  \n";
            }
            getch();
        }

    }
}






