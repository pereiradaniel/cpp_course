// Class Variables - Header
// classVariable.h
class Horse {
    unsigned age;
    unsigned no;
public:
    static unsigned noHorses;
    Horse(unsigned a);
    void display() const;
    ~Horse();
};
