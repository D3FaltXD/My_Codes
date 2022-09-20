/* In this kata, you will make a function that converts between camelCase, snake_case, and kebab-case.

You must write a function that changes to a given case. It must be able to handle all three case types:

cpp> changeCase("snakeCase", "snake")
"snake_case"
cpp> changeCase("some-lisp-name", "camel")
"someLispName"
cpp> changeCase("map_to_all", "kebab")
"map-to-all"
cpp> changeCase("doHTMLRequest", "kebab")
"do-h-t-m-l-request"
cpp> changeCase("invalid-inPut_bad", "kebab")
""
cpp> changeCase("valid-input", "huh???")
""
cpp> changeCase("", "camel")
""
Your function must deal with invalid input as shown, 
though it will only be passed strings. Furthermore, all valid identifiers will be lowercase except when necessary, 
in other words on word boundaries in camelCase. */
#include <bits/stdc++.h>
using namespace std;

string changeCase(const string &identifier, const string &targetCase)
{
    int under=0;
    int dash=0;
    int upper=0;
    string output="";
    if(targetCase=="camel"){
        for(int i=0;i<identifier.length();i++){
            if(identifier[i]=='-'){
                output+=toupper(identifier[i+1]);
                i++;
                dash++;
                if(upper>0 || under >0)
                    return "";  
            }
            else if(identifier[i]=='_'){
                output+=toupper(identifier[i+1]);
                i++;
                under++;
                 if(upper>0 || dash >0)
                    return ""; 
            }
            else if(isupper(identifier[i])){
                output+=identifier[i];
                upper++;
                if(under>0 || dash >0)
                        return "";
            }
            else{
                output+=identifier[i];
            }
        }

        return output;
    }
    else if(targetCase=="snake"){
        for(int i=0;i<identifier.length();i++){
            if(isupper(identifier[i])){
                output+='_';
                upper++;
                output+=tolower(identifier[i]) ;
                  if(under>0 || dash >0){
                        return "";
                }    
        
            
            }
            else if(identifier[i]=='_'){
                under++;
                if(upper>0 || dash >0)
                    return ""; 
                output+=identifier[i];
            }
               else if(identifier[i]=='-'){
                output+='_';
                output+=identifier[i+1];
                i++;
                dash++;
                if(upper>0 || under >0){
                    return "";  
                }
            } 
            else{
                output+=identifier[i];
            }
        }
    return output;
    }
    else if(targetCase=="kebab"){
         for(int i=0;i<identifier.length();i++){
            if(isupper(identifier[i])){
                output+='-';
                output+=tolower(identifier[i]) ;
                upper++;
                if(under>0 || dash >0)
                        return "";
            }
            else if(identifier[i]=='_'){
                output+='-';
                output+=identifier[i+1];
                i++;
                    under++;
               if(upper>0 || dash >0)
                    return ""; 
            } 
            else if(identifier[i]=='-'){
               dash++;
                if(upper>0 || under >0)
                    return "";                   
                output+=identifier;
            }
            else{
                output+=identifier[i];
            }
            
        }
    return output;
    }
    else return "";
}
int main(){
    string a="little-shop-of-horrors";
    string b="kebab";
    cout<<changeCase(a,b)<<endl;
}