/* Copyright (c) 2014-2015 "Omnidome" by cr8tr
 * Dome Mapping Projection Software (http://omnido.me).
 * Omnidome was created by Michael Winkelmann aka Wilston Oreo (@WilstonOreo)
 *
 * This file is part of Omnidome.
 *
 * Omnidome is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "FullSphere.h"
#include "FullSphereWidget.h"

#include <omni/ui/CanvasParameters.h>

namespace omni
{
  namespace canvas
  {
    FullSphere::FullSphere()
    {
      sphere_.setBottom(-1.0);
      setRadius(5.0);
      update();
    }

    FullSphere::~FullSphere()
    {
    }

    ui::CanvasParameters* FullSphere::widget() {
        // Make a new widget only. The canvas is later assigned
        // because we do not know scene size yet which set
        // the slider ranges of the widget
        return new ui::canvas::FullSphere();
    }
  }
}
