/*
  Copyright (C) 2011 - 2015 by the authors of the ASPECT code.

  This file is part of ASPECT.

  ASPECT is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  ASPECT is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with ASPECT; see the file doc/COPYING.  If not see
  <http://www.gnu.org/licenses/>.
*/


#include <aspect/postprocess/visualization/artificial_viscosity_composition.h>
#include <aspect/simulator_access.h>


namespace aspect
{
  namespace Postprocess
  {
    namespace VisualizationPostprocessors
    {
      template <int dim>
      std::pair<std::string, Vector<float> *>
      ArtificialViscosityComposition<dim>::execute() const
      {
        Assert(this->n_compositional_fields()>0,
            ExcMessage ("The artificial viscosity for compositional fields can "
            "only be calculated if compositional fields are used in the simulation."));

        std::pair<std::string, Vector<float> *>
        return_value ("artificial_viscosity_composition",
                      new Vector<float>(this->get_triangulation().n_active_cells()));
        this->get_artificial_viscosity_composition(*return_value.second, 0);
        return return_value;
      }
    }
  }
}


// explicit instantiations
namespace aspect
{
  namespace Postprocess
  {
    namespace VisualizationPostprocessors
    {
      ASPECT_REGISTER_VISUALIZATION_POSTPROCESSOR(ArtificialViscosityComposition,
                                                  "artificial viscosity composition",
                                                  "A visualization output object that generates output "
                                                  "showing the value of the artificial viscosity for a "
                                                  "compositional field on each cell.")
    }
  }
}
