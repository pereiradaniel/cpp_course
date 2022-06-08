// Aggregation
// Club.h
class Name;

// constexpr - specifies that the value of a variable or function can appear in constant expressions
constexpr int M { 50 };
class Club {
    const Name* name[M]{}; // an array of pointers to Name objects
    int m { 0 };
public:
    Club& operator+=(const Name&); 
    Club& operator-=(const Name&);
    void display() const;
    //...
};
