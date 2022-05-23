// Synonym Pointer Types

// Each synonym type also has a pointer type associated with it:

 typedef unsigned long long int ullint; 
 ullint* p;
// A synonym pointer type simplifies repeated definitions of the pointer type.  For example,

 typedef unsigned long long int* ullint_ptr; 
 ullint_ptr p; // a pointer to ullint 
// Unlike a pointer declaration, this synonym type does not require an * before each identifier.  Compare this syntax to direct-definition syntax:

 unsigned long long int* pp, * qq;  // we need * before each identifier 
 ullint_ptr p, q;                   // no need for a repeated *
// Synonym pointer syntax is more readable and less error prone. 