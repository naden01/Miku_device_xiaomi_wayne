#ifndef __QCAMERA_COMPAT_H__
#define __QCAMERA_COMPAT_H__

// Legacy camera commands removed in Android 15
// Define them locally for backwards compatibility
#ifndef CAMERA_CMD_LONGSHOT_ON
#define CAMERA_CMD_LONGSHOT_ON 0x101
#endif

#ifndef CAMERA_CMD_LONGSHOT_OFF
#define CAMERA_CMD_LONGSHOT_OFF 0x102
#endif

#ifndef CAMERA_CMD_HISTOGRAM_ON
#define CAMERA_CMD_HISTOGRAM_ON 0x103
#endif

#ifndef CAMERA_CMD_HISTOGRAM_OFF
#define CAMERA_CMD_HISTOGRAM_OFF 0x104
#endif

#ifndef CAMERA_CMD_HISTOGRAM_SEND_DATA
#define CAMERA_CMD_HISTOGRAM_SEND_DATA 0x105
#endif

#ifndef CAMERA_MSG_META_DATA
#define CAMERA_MSG_META_DATA 0x800
#endif

#ifndef CAMERA_META_DATA_ASD
#define CAMERA_META_DATA_ASD 0x001
#endif

#ifndef CAMERA_META_DATA_FD
#define CAMERA_META_DATA_FD 0x002
#endif

#ifndef CAMERA_META_DATA_HDR
#define CAMERA_META_DATA_HDR 0x003
#endif

#ifndef CAMERA_FRAME_DATA_FD
#define CAMERA_FRAME_DATA_FD 0x002
#endif

#ifndef CAMERA_MSG_STATS_DATA
#define CAMERA_MSG_STATS_DATA 0x1000
#endif

#endif // __QCAMERA_COMPAT_H__
