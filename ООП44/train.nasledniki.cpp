#include "traininfo.h"
#include <iostream>
#include <string>

// конструкторы и методы для поездов экспресс
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
    std::cout << "Введите цену билета: ";
    std::cin >> ticketPrice;
}

void ExpressTrain::displayInfo() {
    TrainInfo::displayInfo();
    std::cout << "Цена билета: " << ticketPrice << std::endl;
}

void ExpressTrain::displayInfo1() {
    TrainInfo::displayInfo();
    std::cout << "Цена билета: " << ticketPrice << std::endl;
}

// конструкторы и методы для локальных поездов

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
    std::cout << "Введите тип поезда: ";
    std::cin >> trainType;
}

void LocalTrain::displayInfo() {
    TrainInfo::displayInfo();
    std::cout << "Тип поезда: " << trainType << std::endl;
}

void LocalTrain::displayInfo1() {
    TrainInfo::displayInfo();
    std::cout << "Тип поезда: " << trainType << std::endl;
}