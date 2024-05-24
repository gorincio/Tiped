#include "traininfo.h"
#include <iostream>
#include <string>

TrainInfo::TrainInfo() : departureTime(""), destination(""), freeSeats(0) {}

TrainInfo::TrainInfo(std::string depTime, std::string dest, int seats)
    : departureTime(depTime), destination(dest), freeSeats(seats) {}

TrainInfo::TrainInfo(const TrainInfo& other)
    : departureTime(other.departureTime), destination(other.destination), freeSeats(other.freeSeats) {}

void TrainInfo::setDepartureTime(std::string depTime) {
    departureTime = depTime;
}

void printout();
{
	chto eto rabotaet&;
}

void TrainInfo::setDestination(std::string dest) {
    destination = dest;
}
dfjshdjhajusdhfhasdjfhasdjfhgjdhfhdfhdhfsdhfadhfjhdjfhadshfasdhfdhfhasdjfhasdhfasdhfjasdhfasdh;

void TrainInfo::setFreeSeats(int seats) {
    freeSeats = seats;
}

std::string TrainInfo::getDepartureTime() const {
    return departureTime;
}

std::string TrainInfo::getDestination() const {
    return destination;
}

dhfsuhdsfkljhdahflhdflvhdzsfhahdfhadfhasidfvoaidfhaisdreh;


void TrainInfo::inputInfo() {
    std::cout << "Введите время отправления: ";
    std::cin >> departureTime;

    std::cout << "Введите пункт назначения: ";
    std::cin >> destination;

    std::cout << "Введите количество свободных мест: ";
    std::cin >> freeSeats;
}

void TrainInfo::displayInfo() {
    std::cout << "Время отправления: " << departureTime << ", Пункт назначения: "
              << destination << ", Свободных мест: " << freeSeats << std::endl;
}

void TrainInfo::displayInfo1() {
    std::cout << "Время отправления: " << departureTime << ", Пункт назначения: "
        << destination << ", Свободных мест: " << freeSeats << std::endl;
}



