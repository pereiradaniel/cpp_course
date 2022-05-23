# LINKAGE

A function type can have either external or internal linkage.  A function with external linkage is visible outside its translation unit, while a function with internal linkage is invisible outside its translation unit.

The default linkage for a function type in C++ is external.  That is, the keyword extern is redundant.  The main() function of every application must have external linkage. 

To specify internal linkage, we preface the function declaration with the keyword static.