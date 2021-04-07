#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <iostream>
#include <dune/common/parallel/mpihelper.hh> 
#include<dune/common/parametertreeparser.hh>

#include <dune/grid/uggrid.hh>             // Koristimo UGGrid
#include <dune/grid/io/file/gmshreader.hh> // GmshReader klasa
#include <dune/grid/common/gridinfo.hh>

#include "driver.hh"

int main(int argc, char** argv)
{
    Dune::MPIHelper::instance(argc, argv);
    // Vaš kod dolazi ovdje. Koristiti UGGrid<3>.
    // Kreirati mrežu i pozvati driver rutinu.     
    return 0;
}
