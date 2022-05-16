# FinalATCSim

This Project Aim to improve C++ skills using STD library to create new tools. I made Queue, I/O file handler and many more tools from scratch using only standart library. This project made for BOP2 courses given by BME AUT Department.

<p align="center">
  <img width="400" height="100" src="https://user-images.githubusercontent.com/63854390/168567286-37e46891-b19b-4209-8038-9b142c753dfe.png">
</p>

<p align="center">
  <img width="100" height="100" src="https://user-images.githubusercontent.com/63854390/168570117-8d72bae4-517d-4b2f-ace3-a8874a182321.png">
  <img width="100" height="100" src="https://user-images.githubusercontent.com/63854390/168570722-d527ff13-3dd6-4169-857a-3a4d3db0dc33.png">
</p>


## How it works?

Given input.txt file example for flights (Each line):

```
FLIGHT_NO TYPE	FROM	TO	SPEED	ALTITUDE
38	COM	AMS	BUD	424	40000
9	COM	ARN	BUD	450	38000
119	COM	LHR	BUD	530	35000
92	COM	STR	BUD	496	34800
27	PRI	GRZ	BUD	136	7125
2	PRI	QGY	BUD	145	18000
12	MAC	FLR	BUD	200	11000
```


Based on this input file, algorithm put this flights on a landing Queue and gives directives for landing. And print all this results to output.txt file that also created by I/O file handler in project.

## Example output.txt file
This is demonstration for the output.txt file:
```
This is COM Commercial Flight with No: 38
38, COM, AMS, BUD, 424, 40000
Lower your speed: -354 Knots
Lower your altitude: -40000 Ft
Flight 38, you are at: 1 on Landing Queue.
------

This is COM Commercial Flight with No: 9
9, COM, ARN, BUD, 450, 38000
Lower your speed: -380 Knots
Lower your altitude: -38000 Ft
Flight 9, you are at: 2 on Landing Queue.
------

This is COM Commercial Flight with No: 119
119, COM, LHR, BUD, 530, 35000
Lower your speed: -460 Knots
Lower your altitude: -35000 Ft
Flight 119, you are at: 3 on Landing Queue.
------

This is COM Commercial Flight with No: 92
92, COM, STR, BUD, 496, 34800
Lower your speed: -426 Knots
Lower your altitude: -34800 Ft
Flight 92, you are at: 4 on Landing Queue.
------

This is PRI Private Flight branch of Commercial Flight with no: 27
27, PRI, GRZ, BUD, 136, 7125
Lower your speed: -36 Knots
Lower your altitude: -7125 Ft
Flight 27, you are at: 5 on Landing Queue.
------

This is PRI Private Flight branch of Commercial Flight with no: 2
2, PRI, QGY, BUD, 145, 18000
Lower your speed: -45 Knots
Lower your altitude: -18000 Ft
Flight 2, you are at: 6 on Landing Queue.
------

This is MAC Military Flight with No: 12
12, MAC, FLR, BUD, 200, 11000
Lower your speed: -60 Knots
Lower your altitude: -11000 Ft
Flight 12, you are at: 7 on Landing Queue.
------

------- Landing Queue Part (Test Cases) --------
This is landing queue by Flight No ~ [First Second Third ... Last]:
[ 38 9 119 92 27 2 12 ]

-------
Popping Landed Flights (5 Landing will be happen) from the queue, identify them by their Flight No:
38
9
119
92
27
Updated landing Queue after landings
[ 2 12 ]
```
