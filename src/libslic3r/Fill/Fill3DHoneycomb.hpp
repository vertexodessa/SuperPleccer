#ifndef slic3r_Fill3DHoneycomb_hpp_
#define slic3r_Fill3DHoneycomb_hpp_

#include <map>

#include "../libslic3r.h"

#include "FillBase.hpp"

namespace Slic3r {

class Fill3DHoneycomb : public Fill
{
public:
    Fill* clone() const override { return new Fill3DHoneycomb(*this); };
    ~Fill3DHoneycomb() override {}

protected:
	void _fill_surface_single(
	    const FillParams                &params, 
	    unsigned int                     thickness_layers,
	    const std::pair<float, Point>   &direction, 
	    const Polyline                  pedestal,
	    ExPolygon                        expolygon, 
	    Polylines                       &polylines_out) const override;
};

} // namespace Slic3r

#endif // slic3r_Fill3DHoneycomb_hpp_
