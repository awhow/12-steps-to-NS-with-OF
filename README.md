# 12-steps to Navier-Stokes with OpenFOAM

Escalating CFD complexity, up to solving a form of the Navier-Stokes equations. This follows the work of <http://lorenabarba.com/blog/cfd-python-12-steps-to-navier-stokes/>. 

It might seem strange to use OpenFOAM to "build up" to the Navier-Stokes equations since it abstracts away most of the numerical complexities. But I often find myself struggling to find the right way to do things in OpenFOAM that I know would be easy in Python or Matlab. So I thought it would be instructive to go through the 12-steps and build up these basic solvers. 

# Steps

## DONE Step 01: 1D Linear convection

Solver: linConvFoam

## DONE Step 02: 1D Non-linear convection

Solver: convFoam

## DONE Step 03: 1D Diffusion

Solver: diffFoam

## DONE Step 04: 1D Burgers equation

Solver: burgersFoam

## DONE Step 05: 2D Linear convection

Solver: linConvFoam

## DONE Step 06: 2D Non-linear convection

Solver: convFoam

## DONE Step 07: 2D Diffusion

Solver: diffFoam

## DONE Step 08: 2D Burgers equation

Solver: burgersFoam

## DONE Step 09: Laplace equation

Solver: lapFoam

## DONE Step 10: Poisson equation

Solver: poissonFoam

## DONE Step 11: Cavity flow

Solver: cavityFoam

## DONE Step 12: Channel flow

Solver: channelFoam