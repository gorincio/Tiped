#include "traininfo.h"
#include <iostream>
#include <string>

// ������������ � ������ ��� ������� ��������
ExpressTrain::ExpressTrain() : TrainInfo(), ticketPrice(0) {}

ExpressTrain::ExpressTrain(std::string depTime, std::string dest, int seats, int price)
    : TrainInfo(depTime, dest, seats), ticketPrice(price) {}

void ExpressTrain::setTicketPrice(int price) {
    ticketPrice = price;
}

int ExpressTrain::getTicketPrice() const {
    return ticketPrice;
}

void ExpressTrain::inputInfo() {
    TrainInfo::inputInfo();
    std::cout << "������� ���� ������: ";
    std::cin >> ticketPrice;
}

void ExpressTrain::displayInfo() {
    TrainInfo::displayInfo();
    std::cout << "���� ������: " << ticketPrice << std::endl;
}

void ExpressTrain::displayInfo1() {
    TrainInfo::displayInfo();
    std::cout << "���� ������: " << ticketPrice << std::endl;
}

// ������������ � ������ ��� ��������� �������

LocalTrain::LocalTrain() : TrainInfo(), trainType("") {}

LocalTrain::LocalTrain(std::string depTime, std::string dest, int seats, std::string type)
    : TrainInfo(depTime, dest, seats), trainType(type) {}

void LocalTrain::setTrainType(std::string type) {
    trainType = type;
}

std::string LocalTrain::getTrainType() const {
    return trainType;
}

void LocalTrain::inputInfo() {
    TrainInfo::inputInfo();
    std::cout << "������� ��� ������: ";
    std::cin >> trainType;
}

void LocalTrain::displayInfo() {
    TrainInfo::displayInfo();
    std::cout << "��� ������: " << trainType << std::endl;
}

void LocalTrain::displayInfo1() {
    TrainInfo::displayInfo();
    std::cout << "��� ������: " << trainType << std::endl;
}