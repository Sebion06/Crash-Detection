
#define FRONTAL_CRASH 1
#define LATERAL_RIGHT_CRASH 2
#define LATERAL_LEFT_CRASH 3
#define EASY_CRASH 1
#define SEVERE_CRASH 2
#define FRONTAL_MIN_NB_ACC_SAMPLES 3
#define LATERAL_MIN_NB_ACC_SAMPLES 3
#define FRONTAL_CRASH_LOW_ACC_THRESHOLD 0.80
#define FRONTAL_CRASH_HIGH_ACC_THRESHOLD 1.60
#define LATERAL_CRASH_LOW_ACC_THRESHOLD 0.80
#define LATERAL_CRASH_HIGH_ACC_THRESHOLD 1.60

extern int crash_type;
extern int crash_severity;

void CrashDetectionAlgorithm_MainFunction(float, float, float);
int CrashDetectionAlgorithm_GetCrashSeverity();
int CrashDetectionAlgorithm_GetCrashType();