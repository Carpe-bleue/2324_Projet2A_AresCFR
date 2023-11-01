
#include "strategy.h"

Strategy* strategy_initialize(int num) {
	if(num == 0 || num == 1)
	{
		Strategy* strategy = (Strategy*) malloc(sizeof(Strategy));
		    strategy->length = 1;
		    strategy->path = (Bezier**) malloc(sizeof(Bezier*) * strategy->length);

		    strategy->directions = (Direction*) malloc(sizeof(Direction) * strategy->length);
		    strategy->speeds = (float*) calloc(strategy->length+1, sizeof(float));

		    strategy->onSiteActions = (uint8_t**) malloc(sizeof(uint8_t*) * (strategy->length+1));
		    strategy->onSiteActionsLengths = (int*) calloc((strategy->length+1), sizeof(int));
		    strategy->onMoveActions = (uint8_t**) malloc(sizeof(uint8_t*) * (strategy->length+1));
		    strategy->onMoveActionsLengths = (int*) calloc((strategy->length+1), sizeof(int));

		    strategy->path[0] = bezier_new(2534.680, 1000, 2073.277, 1000, 2073, 500, 450, 1000, 30);

		    strategy->directions[0] = FORWARD;

		    strategy->speeds[0] = 1000;



		    return strategy;
	}
	else if(num == 2 || num == 3)
	{
		Strategy* strategy = (Strategy*) malloc(sizeof(Strategy));
		    strategy->length = 10;
		    strategy->path = (Bezier**) malloc(sizeof(Bezier*) * strategy->length);

		    strategy->directions = (Direction*) malloc(sizeof(Direction) * strategy->length);
		    strategy->speeds = (float*) calloc(strategy->length+1, sizeof(float));

		    strategy->onSiteActions = (uint8_t**) malloc(sizeof(uint8_t*) * (strategy->length+1));
		    strategy->onSiteActionsLengths = (int*) calloc((strategy->length+1), sizeof(int));
		    strategy->onMoveActions = (uint8_t**) malloc(sizeof(uint8_t*) * (strategy->length+1));
		    strategy->onMoveActionsLengths = (int*) calloc((strategy->length+1), sizeof(int));

		    strategy->path[0] = bezier_new(229.112, 1784.667, 329.112, 1784.667, 630.306, 1755.355, 716.725, 1691.289, 30);
		    strategy->path[1] = bezier_new(716.725, 1691.289, 803.144, 1627.223, 814.779, 1468.650, 818.239, 1365.982, 30);
		    strategy->path[2] = bezier_new(818.239, 1365.982, 821.700, 1263.314, 843.164, 816.916, 839.722, 697.680, 30);
		    strategy->path[3] = bezier_new(839.722, 697.680, 836.279, 578.443, 753.639, 361.990, 649.818, 298.544, 30);
		    strategy->path[4] = bezier_new(649.818, 298.544, 545.996, 235.097, 266.832, 224.715, 266.832, 224.715, 30);
		    strategy->path[5] = bezier_new(266.832, 224.715, 266.832, 224.715, 588.279, 220.818, 685.592, 266.699, 30);
		    strategy->path[6] = bezier_new(685.592, 266.699, 782.906, 312.579, 915.106, 441.160, 937.807, 521.942, 30);
		    strategy->path[7] = bezier_new(937.807, 521.942, 960.509, 602.724, 964.820, 1357.133, 934.827, 1503.997, 30);
		    strategy->path[8] = bezier_new(934.827, 1503.997, 904.835, 1650.861, 875.451, 1661.067, 769.042, 1741.937, 30);
		    strategy->path[9] = bezier_new(769.042, 1741.937, 662.633, 1822.807, 232.456, 1783.626, 232.456, 1783.626, 30);

		    strategy->directions[0] = FORWARD;
		    strategy->directions[1] = FORWARD;
		    strategy->directions[2] = FORWARD;
		    strategy->directions[3] = FORWARD;
		    strategy->directions[4] = FORWARD;
		    strategy->directions[5] = BACKWARD;
		    strategy->directions[6] = BACKWARD;
		    strategy->directions[7] = BACKWARD;
		    strategy->directions[8] = BACKWARD;
		    strategy->directions[9] = BACKWARD;

		    strategy->speeds[0] = 504;
		    strategy->speeds[1] = 497;
		    strategy->speeds[2] = 1000;
		    strategy->speeds[3] = 490;
		    strategy->speeds[4] = 483;
		    strategy->speeds[5] = 480;
		    strategy->speeds[6] = 511;
		    strategy->speeds[7] = 473;
		    strategy->speeds[8] = 490;
		    strategy->speeds[9] = 480;



		    return strategy;
	}
	else if(num == 5 || num == 4)
	{	Strategy* strategy = (Strategy*) malloc(sizeof(Strategy));
    strategy->length = 2;
    strategy->path = (Bezier**) malloc(sizeof(Bezier*) * strategy->length);

    strategy->directions = (Direction*) malloc(sizeof(Direction) * strategy->length);
    strategy->speeds = (float*) calloc(strategy->length+1, sizeof(float));

    strategy->onSiteActions = (uint8_t**) malloc(sizeof(uint8_t*) * (strategy->length+1));
    strategy->onSiteActionsLengths = (int*) calloc((strategy->length+1), sizeof(int));
    strategy->onMoveActions = (uint8_t**) malloc(sizeof(uint8_t*) * (strategy->length+1));
    strategy->onMoveActionsLengths = (int*) calloc((strategy->length+1), sizeof(int));

    //strategy->path[0] = bezier_new(1095.392, 1841.935, 1098.577, 1678.371, 1099.549, 1671.753, 1105.089, 1399.884, 30);
    //strategy->path[1] = bezier_new(1105.089, 1399.884, 1110.630, 1128.015, 1407.093, 1071.997, 1407.093, 1071.997, 30);

    strategy->directions[0] = FORWARD;
    strategy->directions[1] = BACKWARD;

    strategy->speeds[0] = 496;
    strategy->speeds[1] = 496;



    return strategy;
	}
}

