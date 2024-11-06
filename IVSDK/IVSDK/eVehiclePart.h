enum eVehiclePart
{
	PART_CHASSIS,
	PART_SEAT_DSIDE_F,
	PART_SEAT_DSIDE_R,
	PART_SEAT_PSIDE_F,
	PART_SEAT_PSIDE_R,
	PART_DOOR_DSIDE_F,
	PART_DOOR_DSIDE_R,
	PART_DOOR_PSIDE_F,
	PART_DOOR_PSIDE_R,
	PART_WHEEL_LF,
	PART_WHEEL_RF,
	PART_WHEEL_LM,
	PART_WHEEL_RM,
	PART_WHEEL_LR,
	PART_WHEEL_RR,
	PART_SUSPENSION_LF,
	PART_SUSPENSION_RF,
	PART_SUSPENSION_LM,
	PART_SUSPENSION_RM,
	PART_SUSPENSION_LR,
	PART_SUSPENSION_RR,
	PART_TRANSMISSION_F,
	PART_TRANSMISSION_M,
	PART_TRANSMISSION_R,
	PART_HUB_LF,
	PART_HUB_RF,
	PART_HUB_LR,
	PART_HUB_RR,
	PART_WINDSCREEN,
	PART_WINDSCREEN_R,
	PART_WINDOW_LF,
	PART_WINDOW_RF,
	PART_WINDOW_LR,
	PART_WINDOW_RR,
	PART_BODYSHELL,
	PART_BUMPER_F,
	PART_BUMPER_R,
	PART_WING_RF,
	PART_WING_LF,
	PART_BONNET,
	PART_BOOT,
	PART_EXHAUST,
	PART_EXHAUST_2,
	PART_EXHAUST_3,
	PART_EXHAUST_4,
	PART_ENGINE,
	PART_OVERHEAT,
	PART_OVERHEAT_2,
	PART_PETROLCAP,
	PART_PETROLTANK,
	PART_HEADLIGHT_L,
	PART_HEADLIGHT_R,
	PART_TAILLIGHT_L,
	PART_TAILLIGHT_R,
	PART_INDICATOR_LF,
	PART_INDICATOR_RF,
	PART_INDICATOR_LR,
	PART_INDICATOR_RR,
	PART_BRAKELIGHT_L,
	PART_BRAKELIGHT_R,
	PART_BRAKELIGHT_M,
	PART_REVERSINGLIGHT_L,
	PART_REVERSINGLIGHT_R,
	PART_NUMBERPLATE,
	PART_INTERIORLIGHT,
	PART_SIREN1,
	PART_SIREN2,
	PART_SIREN3,
	PART_SIREN4,
	PART_SIREN5,
	PART_SIREN6,
	PART_SIREN7,
	PART_SIREN8,
	PART_SIREN_GLASS1,
	PART_SIREN_GLASS2,
	PART_SIREN_GLASS3,
	PART_SIREN_GLASS4,
	PART_SIREN_GLASS5,
	PART_SIREN_GLASS6,
	PART_SIREN_GLASS7,
	PART_SIREN_GLASS8,
	PART_MISC_A,
	PART_MISC_B,
	PART_MISC_C,
	PART_MISC_D,
	PART_MISC_E,
	PART_MISC_F,
	PART_MISC_G,
	PART_MISC_H,
	PART_EXTRA_1,
	PART_EXTRA_2,
	PART_EXTRA_3,
	PART_EXTRA_4,
	PART_EXTRA_5,
	PART_EXTRA_6,
	PART_EXTRA_7,
	PART_EXTRA_8,
	PART_EXTRA_9,
	PART_EXTRA_10,

	PART_BOAT_STATIC_PROP = PART_EXTRA_1,
	PART_BOAT_MOVING_PROP,
	PART_BOAT_STATIC_PROP2,
	PART_BOAT_MOVING_PROP2,
	PART_BOAT_RUDDER,
	PART_BOAT_RUDDER2,

	PART_BIKE_CHASSIS = PART_EXTRA_1,
	PART_BIKE_SEAT_F,
	PART_BIKE_SEAT_R,
	PART_BIKE_FORKS_U,
	PART_BIKE_FORKS_L,
	PART_BIKE_HANDLEBARS,
	PART_BIKE_HBGRIP_L,
	PART_BIKE_HBGRIP_R,
	PART_BIKE_WHEEL_F,
	PART_BIKE_SWINGARM,
	PART_BIKE_WHEEL_R,
	PART_BIKE_RIDER,

	PART_TRAIN_WHEEL_RF1_DUMMY = PART_EXTRA_1,
	PART_TRAIN_WHEEL_RF2_DUMMY,
	PART_TRAIN_WHEEL_RF3_DUMMY,
	PART_TRAIN_WHEEL_RB1_DUMMY,
	PART_TRAIN_WHEEL_RB2_DUMMY,
	PART_TRAIN_WHEEL_RB3_DUMMY,
	PART_TRAIN_WHEEL_LF1_DUMMY,
	PART_TRAIN_WHEEL_LF2_DUMMY,
	PART_TRAIN_WHEEL_LF3_DUMMY,
	PART_TRAIN_WHEEL_LB1_DUMMY,
	PART_TRAIN_WHEEL_LB2_DUMMY,
	PART_TRAIN_WHEEL_LB3_DUMMY,
	PART_TRAIN_BOGIE_FRONT,
	PART_TRAIN_BOGIE_REAR,

	PART_HELI_STATIC_ROTOR1 = PART_EXTRA_1,
	PART_HELI_MOVING_ROTOR1,
	PART_HELI_STATIC_ROTOR2,
	PART_HELI_MOVING_ROTOR2,
	PART_HELI_RUDDER,
	PART_HELI_ELEVATORS,

	PART_PLANE_STATIC_PROP = PART_EXTRA_1,
	PART_PLANE_MOVING_PROP,
	PART_PLANE_STATIC_PROP2,
	PART_PLANE_MOVING_PROP2,
	PART_PLANE_RUDDER,
	PART_PLANE_ELEVATOR_L,
	PART_PLANE_ELEVATOR_R,
	PART_PLANE_AILERON_L,
	PART_PLANE_AILERON_R,
};