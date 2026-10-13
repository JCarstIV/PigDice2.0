#include "DIE.h"

Die::Die() {
    m_dieValue = 0;
    //setDieValue();
}

//Set private thing
void Die::rollDie() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 6);
    m_dieValue = dis(gen);
}

//Get private thing
int Die::getDieValue() const {
    return m_dieValue;
    //put rules for accessing data here, not in setting
}

//conditional changing of variable
/*void Die::set_numOfSides(int numOfSides) {
    switch (numOfSides) {
        case 4:
            m_numOfSides = 4;
            break;
        case 6:
            m_numOfSides = 6;
            break;
        case 8:
            m_numOfSides = 8;
            break;
        default:
            m_numOfSides = 6;
    }

}
int Die::getNumOfSides() {
    return m_numOfSides;
}*/