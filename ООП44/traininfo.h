#include <string>
#include <iostream>

class TrainInfo {
private:
    std::string departureTime;
    std::string destination;
    int freeSeats;

public:
    TrainInfo();
    TrainInfo(std::string depTime, std::string dest, int seats);
    TrainInfo(const TrainInfo& other);

    void setDepartureTime(std::string depTime);
    void setDestination(std::string dest);
    void setFreeSeats(int seats);

    std::string getDepartureTime() const;
    std::string getDestination() const;
    int getFreeSeats() const;

    void inputInfo();
    void displayInfo();
    virtual void displayInfo1();

    ~TrainInfo();
};

class ExpressTrain : public TrainInfo {
private:
    int ticketPrice;

public:
    ExpressTrain();

    ExpressTrain(std::string depTime, std::string dest, int seats, int price);

    void setTicketPrice(int price);

    int getTicketPrice() const;

    void inputInfo();

    void displayInfo();
    void displayInfo1();
};

class LocalTrain : public TrainInfo {
private:
    std::string trainType;

public:

    LocalTrain();

    LocalTrain(std::string depTime, std::string dest, int seats, std::string type);

    void setTrainType(std::string type);

    std::string getTrainType() const;

    void inputInfo();

    void displayInfo();
    void displayInfo1();
};


