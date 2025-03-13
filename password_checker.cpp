#include<iostream>
#include<string>
#include<cctype>

int main(){
    std::string password;
    std::cout<<"Enter your password: "<<std::endl;
    std::cin>>password;

    if(password.length()>=9){
        bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;
        for(char ch : password){
            if(std::isdigit(ch))hasDigit=true;
            if(std::islower(ch))hasLower=true;
            if(std::isupper(ch))hasUpper=true;
            if(std::ispunct(ch))hasSpecial=true;
        }
        if(hasDigit && hasLower && hasUpper && hasSpecial){
            std::cout<<"Strong Password."<<std::endl;
        }
        else{
            std::cout<<"Weak Password"<<std::endl;
        }
    }
    else{
        std::cout<<"Password must be atleast 9 characters long."<<std::endl;
    }
    return 0;
    }
    
 