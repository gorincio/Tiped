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

void TrainInfo::setDestination(std::string dest) {
    destination = dest;
}

void TrainInfo::setFreeSeats(int seats) {
    freeSeats = seats;
}

std::string TrainInfo::getDepartureTime() const {
    return departureTime;
}

std::string TrainInfo::getDestination() const {
    return destination;
}

int TrainInfo::getFreeSeats() const {
    return freeSeats;
}

void TrainInfo::inputInfo() {
    std::cout << "������� ����� �����������: ";
    std::cin >> departureTime;

    std::cout << "������� ����� ����������: ";
    std::cin >> destination;

    std::cout << "������� ���������� ��������� ����: ";
    std::cin >> freeSeats;
}

void TrainInfo::displayInfo() {
    std::cout << "����� �����������: " << departureTime << ", ����� ����������: "
              << destination << ", ��������� ����: " << freeSeats << std::endl;
}

void TrainInfo::displayInfo1() {
    std::cout << "����� �����������: " << departureTime << ", ����� ����������: "
        << destination << ", ��������� ����: " << freeSeats << std::endl;
}

TrainInfo::~TrainInfo() {
    std::cout << "The object has been deleted. Information about the train:\n";
    displayInfo();
}
