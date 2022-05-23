// Class Variables - Header
// classVariable.h
class Horse {
    unsigned age;
    unsigned no;
public:
    static unsigned noHorses;   // Class variable
    Horse(unsigned a);
    void display() const;
    ~Horse();
};
