
#include "graphical_model.h"
#include "visitors/standard_visitor.hxx"
int main(int argc, char* argv[])

{
MpRoundingSolver<Solver<FMC_SRMP_T,LP,StandardTighteningVisitor>> solver(argc,argv);
solver.ReadProblem(HDF5Input::ParseProblem<Solver<FMC_SRMP_T,LP,StandardTighteningVisitor>>);
return solver.Solve();

}
