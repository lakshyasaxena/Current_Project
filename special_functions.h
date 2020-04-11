#ifndef SPECIAL_FUNCTIONS_H_INCLUDED
#define SPECIAL_FUNCTIONS_H_INCLUDED
using namespace std;
typedef long long ll;
namespace  special_functions
{
    bool all_integers(std::string temp);
    ll string_to_integer_converter(string temp);
    string positive_number_to_string(ll);
}








bool special_functions::all_integers(std::string temp)
{
    for(int i=0;i<temp.size();i++)
    {
        if( (temp[i]=='0') || (temp[i]=='1') || (temp[i]=='2') || (temp[i]=='3') || (temp[i]=='4') || (temp[i]=='5') || (temp[i]=='6') || (temp[i]=='7') || (temp[i]=='8') || (temp[i]=='9')  )
        {continue;}
        else { return false; }
    }
    return true;
}




ll special_functions::string_to_integer_converter(string str)
{
    ll sum=0;
    reverse(str.begin(),str.end());
    ll itr=1;
    for(int i=0;i<str.size();i++)
    {
        ll store=str[i]-48;
        sum+=(itr*store);
        itr*=10;
    }
    return sum;
}





string special_functions::positive_number_to_string(ll num)
{
    string str="";
    while(num!=0)
    {
        int ch; ch=num%10; num/=10;
        switch(ch)
        {
        case 0: { str+="0"; break; }
        case 1: { str+="1"; break; }
        case 2: { str+="2"; break; }
        case 3: { str+="3"; break; }
        case 4: { str+="4"; break; }
        case 5: { str+="5"; break; }
        case 6: { str+="6"; break; }
        case 7: { str+="7"; break; }
        case 8: { str+="8"; break; }
        case 9: { str+="9"; break; }
        }
    }
    reverse(str.begin(),str.end()); return str;
}



#endif // SPECIAL_FUNCTIONS_H_INCLUDED
