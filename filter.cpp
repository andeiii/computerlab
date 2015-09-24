using namespace std;
#include <iostream>
#include <string>
#include <locale>

int main (){
  string message = " Line-based text data: text/html <html> Content-Type: text/html Congratulations again!  Now you've downloaded the filelab2-2.html. <br> This file's last modification date will not change.  <p> Thus  if you download this multiple times on your browser, Spongebob a complete copy <br></html>\n";
  string m2= "dhaiosudoijakdnasoid Zaubernussölkdalshdkjasndkjnsa";


  
  if(message.find("Content-Type: text/html")!=string::npos){
    cout<<"text message found"<<endl;
    
    if (message.find("Spongebob")!=string::npos){
      message = "Spongebob!";
      cout<<"Sponge found"<<endl;
    }
    
    else if (m2.find("Zaubernuss")!=string::npos){
      cout<<"alles doooooffff";
    }
    
    cout<<"test:"<<endl;
  }


return 0; 
}
