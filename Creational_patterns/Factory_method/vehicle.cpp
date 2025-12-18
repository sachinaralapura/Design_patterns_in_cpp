#include "vehicle.h"

class Client {
  private:
    Vehicle *vehicle;

  public:
    Client(VehicleFactory *factory) {
        this->vehicle = factory->createVehicle();
    }
    Vehicle *getVehicle() {
        return this->vehicle;
    }
};

int main() {
    VehicleFactory *factory = new TwoWheelerFactory();
    Vehicle *vehicle = factory->createVehicle();
    vehicle->PrintVehicle();

    delete factory;
    delete vehicle;

    factory = new FourWheelerFactory();
    vehicle = factory->createVehicle();
    vehicle->PrintVehicle();

    delete factory;
    delete vehicle;
    return 0;
}
