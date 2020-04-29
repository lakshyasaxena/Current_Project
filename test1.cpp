#include "LAKSHYA_STANDARD_ALGORITHM_OF_TEST_CASES.h"
#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
using namespace lakshya_standard_algorithm_of_test_cases;
typedef long long ll;
void show_data(vector <pair <short,short>> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i].first<<" "<<v1[i].second<<" \n";
    }
}
void traverse(vector <vector <ll>> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void traverse(vector <vector <string>> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void traverse1(vector <string> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
}


void traverse2(vector <string> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\n";
    }
    cout<<"\n";
}


void traverse1(vector <ll> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
}

void traverse2(vector <ll> &v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\n";
    }
    cout<<"\n";
}
int main()
{
    srand(time(NULL));
    Child_of_all_test_case_datatype obj1;
    obj1.show();
    ll t;
    cin>>t;
    ll copy_t=t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        obj1.store_initializer_details(a,b);
    }
    obj1.set_initializer();
    while(copy_t--)
    {
        cout<<"Enter the negative index ->";
        ll index;
        cin>>index;
        int sizee= obj1.get_initializer(index);
        cout<<"The size is "<<sizee<<"\n";
    }

    while(1)
    {
        vector <ll> o3d;
        o3d.push_back(8);
        cout<<"Enter number of attributes ->";
        int number_of_attributes;
        cin>>number_of_attributes;
        o3d.push_back(number_of_attributes);
        int sizee;
        cout<<"Enter the number of rows (size) -> ";
        cin>>sizee;
        o3d.push_back(sizee);
        cout<<"Enter the types of attributes\n";
        short attribute;
        for(int i=0;i<number_of_attributes;i++)
        {
            cin>>attribute;
            o3d.push_back(attribute);
        }
        cout<<"Enter the Properties \n";
        for(int i=3;i<o3d.size();i++)
        {
            short ch=o3d[i];
            switch(ch)
            {
            case 1:
            {
                cout<<"Integer Class\n";
                cout<<"Enter type , min_val , max_val , order \n";
                ll type,min_val,max_val,order;
                cin>>type>>min_val>>max_val>>order;
                short index=obj1.store_details_of_numbers_custom(type,min_val,max_val,order);
                cout<<"This is your Index -> "<<index<<"\n";
                o3d[i]=index;
                break;
            }
            case 2:
            {
                cout<<"Real Class\n";
                cout<<"Enter precision , min_val , max_val , order \n";
                ll precision,min_val,max_val,order;
                cin>>precision>>min_val>>max_val>>order;
                short index=obj1.store_details_of_real_custom(precision,min_val,max_val,order);
                cout<<"This is your Index -> "<<index<<"\n";
                o3d[i]=index;
                break;
            }
            case 3:
            {
                cout<<"String class\n";
                cout<<"Default string, Input string -> ";
                int choice;
                cin>>choice;
                if(choice==1)
                {
                    cout<<"Enter following details for default string\n";
                    cout<<"Default string -> ";
                    string def;
                    cin>>def;
                    short index=obj1.store_default_string(def);
                    cout<<"This is index of your default string store -> "<<index<<"\n";
                    index=obj1.store_details_of_default_string_custom(index);
                    cout<<"This is your Index -> "<<index<<"\n";
                    o3d[i]=index;
                }
                else
                {
                    cout<<"Enter following details for Input String\n";
                    cout<<"Input String , type , mode , size_of_string , order  \n";
                    string str;
                    ll type,mode,size_of_string,order;
                    cin>>str>>type>>mode>>size_of_string>>order;
                    short index=obj1.store_input_string(str,type,mode,size_of_string);
                    cout<<"This is index of your input string store -> "<<index<<"\n";
                    index=obj1.store_details_of_input_string_custom(index,order);
                    cout<<"This is your Index -> "<<index<<"\n";
                    o3d[i]=index;
                }
                break;
            }
            case 4:
            {
                cout<<"Class Permutation \n";
                cout<<"Enter following details for String Permutation\n";
                cout<<"String , order \n";
                string str;
                short order;
                cin>>str>>order;
                short index=obj1.store_string_for_permutation(str);
                cout<<"This is index of your permutation string store -> "<<index<<"\n";
                index=obj1.store_details_of_permutation_string_custom(index,order);
                cout<<"This is your Index -> "<<index<<"\n";
                o3d[i]=index;
                break;
            }
            case 5:
            {
                cout<<"Class Unique Numbers\n";
                cout<<"Enter following details for unique numbers\n";
                cout<<"Min_value , Max_Value , Order \n";
                ll min_val,max_val,order;
                cin>>min_val>>max_val>>order;
                short index=obj1.store_details_of_unique_numbers_custom(min_val,max_val,order);
                cout<<"This is your Index -> "<<index<<"\n";
                o3d[i]=index;
                break;
            }
            case 6:
                {
                    short index=obj1.store_space_in_custom();
                    o3d[i]=index;
                    break;
                }
            }
        }
        obj1.traverse_custom();
        cout<<"\ndone: now how to fetch data\n\n\n";




        vector <pair <short,short>> store=obj1.build_custom_data_type(o3d);
        show_data(store);
        cout<<"\n\n";
        int size_of_custom=o3d[2];
        if(size_of_custom<0) { size_of_custom=obj1.get_initializer(size_of_custom); }
        cout<<"size of custom = "<<size_of_custom<<"\n";
        for(int i=0;i<size_of_custom;i++)
        {
            for(int j=0;j<store.size();j++)
            {
                short ch=store[j].first;
                switch(ch)
                {
                case 1:
                    {
                        cout<<obj1.get_integer_data_of_custom(store[j].second,i);
                        break;
                    }
                case 2:
                    {
                        cout<<obj1.get_string_data_of_custom(store[j].second,i);
                        break;
                    }
                case 3:
                    {
                        cout<<" ";
                        break;
                    }
                }
            }
            cout<<"\n";
        }
        obj1.reset_custom_data();
    }




















    return 0;
}


    /*
    while(1)
    {
        cout<<"Enter your case ->";
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                cout<<"Enter following details for INTEGER\n";
                cout<<"Type , min val , max val , Row , Col , Order1 , order2\n";
                ll type,min_val,max_val,row,col,order1,order2;
                cin>>type>>min_val>>max_val>>row>>col>>order1>>order2;
                vector <vector <ll>> matrix=obj1.get_integer_matrix(type,min_val,max_val,row,col,order1,order2);
                traverse(matrix);
                break;
            }
        case 2:
            {
                cout<<"Enter following details for Real\n";
                cout<<"set precision , min val , max val , Row , Col , Order1 , order2\n";
                ll precision,min_val,max_val,row,col,order1,order2;
                cin>>precision>>min_val>>max_val>>row>>col>>order1>>order2;
                vector <vector <string>> matrix=obj1.get_real_matrix(precision,min_val,max_val,row,col,order1,order2);
                traverse(matrix);
                break;
            }
        case 3:
            {
                cout<<"Enter following details for Default String\n";
                cout<<"Default string , Input String\n";
                int choice;
                cin>>choice;
                if(choice==1)
                {
                    cout<<"Enter following details\n";
                    cout<<"Default String , Rows , Columns\n";
                    string def;
                    int row,col;
                    cin>>def>>row>>col;
                    if(row<0) { row=obj1.get_initializer(row); }  if(col<0) { col=obj1.get_initializer(col); }
                    short index=obj1.store_default_string(def);
                    cout<<"This is your valid index -> "<<index<<"\n";
                    cout<<"Enter the valid index ->";
                    cin>>index;
                    string a=obj1.get_default_string(index);
                    for(int i=0;i<row;i++) { for(int j=0;j<col;j++) { cout<<a<<" "; } cout<<"\n"; }
                }
                else
                {
                    cout<<"Enter following details for Input String\n";
                    cout<<"Input string , type , mode , size_of_string , row , col , order1 , order2\n";
                    string str;
                    ll type,mode,size_of_string,row,col,order1,order2;
                    cin>>str>>type>>mode>>size_of_string>>row>>col>>order1>>order2;
                    short index=obj1.store_input_string(str,type,mode,size_of_string);
                    cout<<"This is your valid index -> "<<index<<"\n";
                    cout<<"Enter the valid index ->";
                    cin>>index;
                    vector <vector <string>> matrix=obj1.get_string_matrix(index,row,col,order1,order2);
                    traverse(matrix);
                }
                break;
            }
        case 4:
            {
                cout<<"Enter following details for Permutation String\n";
                cout<<"String , row , col , order1 , order2";
                string str;
                ll row,col,order1,order2;
                cin>>str>>row>>col>>order1>>order2;
                short index=obj1.store_string_for_permutation(str);
                cout<<"This is your valid index -> "<<index<<"\n";
                cout<<"Enter the valid index ->";
                cin>>index;
                vector <vector <string>> matrix=obj1.get_permutation_matrix(index,row,col,order1,order2);
                traverse(matrix);
            }
        case 5:
            {
                cout<<"Enter following details for Matrix of all unique numbers\n";
                cout<<"lower_limit , upper_limit , row , col , order1 , order2";
                ll low,up,row,col,order1,order2;
                cin>>low>>up>>row>>col>>order1>>order2;
                vector <vector <ll>> matrix=obj1.get_matrix_of_all_unique_numbers(low,up,row,col,order1,order2);
                traverse(matrix);
            }
        }
    }








 return 0;
}
    /*
    ll t;
    cin>>t;
    ll copy_t=t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        obj1.store_initializer_details(a,b);
    }
    obj1.set_initializer();
    while(copy_t--)
    {
        cout<<"Enter the negative index ->";
        ll index;
        cin>>index;
        int sizee= obj1.get_initializer(index);
        cout<<"The size is "<<sizee<<"\n";
    }


    while(1)
    {
        //  for array class
        ll mode;
        cin>>mode;
        switch(mode)
        {
        case 1:
            {
                ll type,min_value,max_value,sizee,print,order;
                cout<<"Enter the details -> type , min_value,max_value,sizee,print_style,order\n";
                cin>>type>>min_value>>max_value>>sizee>>print>>order;
                vector <ll> store;
                store=obj1.get_integer(type,min_value,max_value,sizee,order);
                if(print==1)
                {
                    traverse1(store);
                }
                else
                {
                    traverse2(store);
                }
                break;
            }
        case 2:
            {
                ll set_precision,min_value,max_value,sizee,print,order;
                cout<<"Enter the details -> set_precision , min_value,max_value,sizee,print_style,order\n";
                cin>>set_precision>>min_value>>max_value>>sizee>>print>>order;
                vector <string> store;
                store=obj1.get_real(set_precision,min_value,max_value,sizee,order);
                if(print==1)
                {
                    traverse1(store);
                }
                else
                {
                    traverse2(store);
                }
                break;
            }
        case 3:
            {

                short choice1;
                short choice2;
                cout<<"Enter your choice1 (default or input)->";
                cin>>choice1;
                cout<<"Enter your choice2 (input or generate)->";
                cin>>choice2;
                if(choice1==1)
                    {
                        if(choice2==1)
                        {
                            cout<<"Enter the Default String sizee,print_style\n";
                            string str;
                            ll sizee;
                            ll print;
                            cin>>str>>sizee>>print;
                            if(sizee<0) { sizee=obj1.get_initializer(sizee); }
                            short index=obj1.store_default_string(str);
                            cout<<"Your index is = "<<index<<"\n\n";
                            cout<<"Enter the valid index ->";
                            cin>>index;
                            string a=obj1.get_default_string(index);
                            if(print==1)
                                {
                                    for(int i=0;i<sizee;i++)
                                    {
                                        cout<<a<<" ";
                                    }
                                    cout<<"\n";
                                }
                            else
                            {
                                for(int i=0;i<sizee;i++)
                                {
                                    cout<<a<<"\n";
                                }
                                cout<<"\n";
                            }
                        }
                     }
                else if(choice1==2)
                 {
                if(choice2==1)
                {
                cout<<"Enter string type mode sizee->";
                string str; short type,mode; int sizee;
                cin>>str>>type>>mode>>sizee;
                short index=obj1.store_input_string(str,type,mode,sizee);
                cout<<"This is your index = "<<index<<"\n";
                ll index2,sizee2,print,order;
                cout<<"Enter the index2,sizee of array,print_stype,order\n";
                cin>>index2>>sizee2>>print>>order;
                vector <string> a=obj1.get_input_string_array(index2,sizee2,order);
                if(print==1)
                {
                    traverse1(a);
                }
                else
                {
                    traverse2(a);
                }
                break;
                }
                else
                {
                cout<<"Enter the valid index-> ";
                short index;
                cin>>index;
                string str=obj1.get_input_string(index);
                cout<<str<<"\n";
                }
                }
        break;
        }
        case 4:
            {
                string str;
                int sizee;
                int print;
                int index;
                int order;
                cout<<"for permutation-> enter string\n";
                cin>>str;
                short index1=obj1.store_string_for_permutation(str);
                cout<<"this is your index-> "<<index1<<"\n";
                cout<<"Enter valid index, sizee , print_style , order ";
                cin>>index>>sizee>>print>>order;
                vector <string> a=obj1.get_all_permutations(index,sizee,order);
                if(print==1)
                    {
                        traverse1(a);
                    }
                else
                    {
                        traverse2(a);
                    }

                break;
            }

        case 5:
            {
                ll low;
                ll up;
                int sizee;
                int print;
                int order;
                cout<<"Enter details for random numbers in range\n";
                cout<<"lower_limit , upper_limit , sizee , print , order\n";
                cin>>low>>up>>sizee>>print>>order;
                vector <ll> v1=obj1.get_all_random_numbers_for_array(low,up,sizee,order);
                if(print==1)
                {
                    traverse1(v1);
                }
                else
                {
                    traverse2(v1);
                }
                break;
            }











            }
    }
    return 0;
}















    /*
    ll t;
    cin>>t;
    ll copy_t=t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        obj1.store_initializer_details(a,b);
    }
    obj1.set_initializer();
    while(copy_t--)
    {
        cout<<"Enter the negative index ->";
        ll index;
        cin>>index;
        int sizee= obj1.get_initializer(index);
        cout<<"The size is "<<sizee<<"\n";
    }

    while(1)
    {
        short choice1;
        short choice2;
        cout<<"Enter your choice1->";
        cin>>choice1;
        cout<<"Enter your choice2->";
        cin>>choice2;
        if(choice1==1)
        {
            if(choice2==1)
            {
                cout<<"Enter the Default String\n";
                string str;
                cin>>str;
                short index=obj1.store_default_string(str);
                cout<<"Your index is = "<<index<<"\n";
            }
            else
            {
                cout<<"Enter the valid index-> ";
                int index;
                cin>>index;
                string str=obj1.get_default_string(index);
                cout<<str<<"\n";
            }
        }
        else if(choice1==2)
        {
            if(choice2==1)
            {
                cout<<"Enter string type mode sizee->";
                string str; short type,mode; int sizee;
                cin>>str>>type>>mode>>sizee;
                short index=obj1.store_input_string(str,type,mode,sizee);
                cout<<"This is your index = "<<index<<"\n";
            }
            else
            {
                cout<<"Enter the valid index-> ";
                short index;
                cin>>index;
                string str=obj1.get_input_string(index);
                cout<<str<<"\n";
            }
        }
    }
    /*while(1)
    {
        ll lower_limit,upper_limit,sizee;
        cin>>lower_limit>>upper_limit>>sizee;
        ll t=10;
        vector <string> real;
        while(t--)
        {
            real.push_back(obj1.get_random_real(lower_limit,upper_limit,sizee));
        }
        traverse(real);
    }
    */
    //return 0;
//}
