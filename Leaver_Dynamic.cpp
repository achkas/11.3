#include "Leaver_Dynamic.h"

namespace Leaver {
    void Leaver::set_inc(std::string name)
    {
        this->name = name;
    }

    std::string Leaver::leave()
    {
        std::string BAY = bay + name + sign;

        return  BAY;
    }


}
