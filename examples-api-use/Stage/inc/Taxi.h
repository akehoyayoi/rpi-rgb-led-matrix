//
//  Taxi.hpp
//  SupersignSimulator
//
//  Created by YOHEI OKAYA on 2017/07/08.
//
//

#ifndef Taxi_hpp
#define Taxi_hpp

#include "OverlayCompoent.h"

class Taxi : public OverlayCompoent {
private:
    int currentPosition;
    std::array<std::array<DisplayInfo, windowWidth>, windowHeight> current;
public:
    Taxi();
    virtual void input(int key);
    virtual std::array<std::array<DisplayInfo, windowWidth>, windowHeight>& simulate();
};

#endif /* Taxi_hpp */
