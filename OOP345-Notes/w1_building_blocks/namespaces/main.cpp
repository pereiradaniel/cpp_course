 #include "dot.h"
 #include "hat.h"
 #include <iostream>
int main() {
     char s[51];
     dot::leader(s);  // OK calls the leader() function declared in dot
     std::cout << s << std::endl;
     hat::leader(s);  // OK calls the leader() function declared in hat 
     std::cout << s << std::endl;
 }
