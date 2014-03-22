Info<< "Reading field U\n" << endl;
volVectorField U
(
    IOobject
    (
        "U",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

volVectorField Uc
(
    IOobject
    (
        "Uc",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    ),
    mesh
    //    dimensionedVector("UxMin", dimensionSet(0,1,-1,0,0,0,0), Foam::vector(min(U.component(0)).value(),0.0,0.0))
);

surfaceScalarField phiC
(
    IOobject
    (
        "phiC",
        runTime.timeName(),
        mesh,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    linearInterpolate(Uc) & mesh.Sf()
);
