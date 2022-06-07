// Trailing Return - Enumeration within a class
// auto_return.cpp
#include <iostream>

class Ticket {
public:
    enum class TicketType { Adult, Child };
    void set(TicketType tt);
    TicketType get() const;
private:
    TicketType ticketType;
};

std::ostream& operator<<(std::ostream& os,
const Ticket::TicketType& tt) {
    const char* label = nullptr;
    switch(tt) {
        case Ticket::TicketType::Adult:
            label = "Adult Ticket";
            break;
        case Ticket::TicketType::Child:
            label = "Child Ticket";
            break;
        default:
            label = "No Ticket";
    }
    os << label;
    return os;
}

void Ticket::set(TicketType tt) { ticketType = tt; }

// Compiler is unaware of TicketType being defined inside Ticket class until after it becomes aware from identifier Ticket::get() that function is a member of the Ticket class can it accept the return type

auto Ticket::get() const -> TicketType { return ticketType; }
// Without auto and Trailing Return Type we need to scope the return type by adding the class name:
// Ticket::TicketType Ticket::get() const { return ticketType; }

int main () {
    Ticket a, b;
    a.set(Ticket::TicketType::Adult);
    b.set(Ticket::TicketType::Child);
    std::cout << a.get() << std::endl;
    std::cout << b.get() << std::endl;
}