class Solution {
public:
    string entityParser(string text) {
        string ans="";
        int prev=-1;
        for(int i=0;i<text.size();i++){
            if(text.size()-i>=5  && text[i]=='&' && text[i+1]=='a' && text[i+2]=='m' && text[i+3]=='p' && text[i+4]==';'){
                ans+="&";
                i+=4;
            }else if(text.size()-i>=6  && text[i]=='&' && text[i+1]=='a' && text[i+2]=='p' && text[i+3]=='o' && text[i+4]=='s' && text[i+5]==';'){
                ans+="'";
                i+=5;
            }else if(text.size()-i>=6  && text[i]=='&' && text[i+1]=='q' && text[i+2]=='u' && text[i+3]=='o' && text[i+4]=='t' && text[i+5]==';'){
                ans+="\"";
                i+=5;
            }else if(text.size()-i>=4  && text[i]=='&' && text[i+1]=='g' && text[i+2]=='t' && text[i+3]==';'){
                ans+=">";
                i+=3;
            }else if(text.size()-i>=4  && text[i]=='&' && text[i+1]=='l' && text[i+2]=='t' && text[i+3]==';'){
                ans+="<";
                i+=3;
            }else if(text.size()-i>=7  && text[i]=='&' && text[i+1]=='f' && text[i+2]=='r' && text[i+3]=='a' && text[i+4]=='s' && text[i+5]=='l' && text[i+6]==';'){
                ans+="/";
                i+=6;
            }else{
                ans+=text[i];
                
            }
        }
        
        // text = std::regex_replace(text, std::regex("&amp;"), "&");
        // text = std::regex_replace(text, std::regex("&apos;"), "\'");
        // text = std::regex_replace(text, std::regex("&quot;"), "\"");
        // text = std::regex_replace(text, std::regex("&gt;"), ">");
        //  text = std::regex_replace(text, std::regex("&lt;"), "<");
        // text = std::regex_replace(text, std::regex("&frasl;"), "/");
        return ans;
    }
};