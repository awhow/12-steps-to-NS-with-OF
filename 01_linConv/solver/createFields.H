// Info<< "Reading transportProperties\n" << endl;
// IOdictionary transportProperties
// (
//     IOobject
//     (
//         "transportProperties",
//         runTime.constant(),
//         mesh,
//         IOobject::MUST_READ,
//         IOobject::NO_WRITE
//     )
// );

// const dimensionedScalar c(transportProperties.lookup("c"));


dimensionedScalar c("c",dimensionSet(0,1,-1,0,0), 1.0);



Info<< "Reading field U\n" << endl;
volScalarField U
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


