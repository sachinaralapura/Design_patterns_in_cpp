#include "Computer.h"

enum class CONFIG { DEFAULT, AMD, INTEL };
// Director class
class ComputerAssembler {
  public:
    Computer assemble(ComputerBuilder *builder, CONFIG config) {
        Computer computer;
        switch (config) {
        case CONFIG::AMD: {
            builder->BuildCpu("Amd Ryzen 5");
            builder->BuildGpu("Nvidia RTX 3050");
            builder->BuildMemory("16 GPU");
            builder->BuildStorge("1 TB");
            computer = builder->getComputer();
        }
        case CONFIG::INTEL: {
            builder->BuildCpu("INTEL i7");
            builder->BuildGpu("Nvidia RTX 3050");
            builder->BuildMemory("16 GPU");
            builder->BuildStorge("1 TB");
            computer = builder->getComputer();
        }
        case CONFIG::DEFAULT: {
            builder->BuildCpu("Intel i5");
            builder->BuildGpu("Nvidia GTX 1650");
            builder->BuildMemory("8 GPU");
            builder->BuildStorge("500 GB");
            computer = builder->getComputer();
        }
        };
        return computer;
    }
};

int main() {
    ComputerBuilder *builder = new DeskTopComputer();
    ComputerAssembler *assembler = new ComputerAssembler();

    Computer desktopcomputer = assembler->assemble(builder, CONFIG::AMD);

    return 0;
}
