#include "ompi_config.h"
#include "event/event.h"
#include "mca/pml/pml.h"
#include "runtime/ompi_progress.h"


void ompi_progress(void)
{
    ompi_event_loop(OMPI_EVLOOP_NONBLOCK);
    mca_pml.pml_progress();
}

