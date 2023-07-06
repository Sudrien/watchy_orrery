#ifndef WATCHY_ORRERY_H
#define WATCHY_ORRERY_H

#include <Watchy.h>
#include <Fonts/FreeSansBold9pt7b.h>
/*
#include "practical-astronomy-cpp/catch2/catch.hpp"
#include "practical-astronomy-cpp/lib/pa_data.h"
#include "practical-astronomy-cpp/lib/pa_planet.h"
#include "practical-astronomy-cpp/lib/pa_types.h"
#include "practical-astronomy-cpp/lib/pa_util.h"
#include <tuple>
*/

#include "bitmaps/bitmaps.h"

#define DEG2RAD 0.0174532925

class WatchyOrrery : public Watchy{
  using Watchy::Watchy;
  public:
    //PAPlanet paPlanet;
    WatchyOrrery(const watchySettings& s) : Watchy(s) {}
    void drawWatchFace();
  private:
  };
#endif