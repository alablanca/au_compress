#pragma once
#include <stdint.h>

// DLL exported function
// au_image_store()  compresses image data in a buffer and writes an image file to disk
extern "C" __declspec(dllexport) int au_image_store
(
    const char*   full_png_file_name,           // full path name, must end with extension .png
    uint16_t*     im_data,                      // memory pointer to image data array which has im_rows * im_cols elements
    int32_t       im_rows,                      // number of image rows
    int32_t       im_cols,                      // number of image columns
    int32_t       spot_center_row_index,        // image row index of the spot center, value range = [0, im_rows-1]
    int32_t       spot_center_col_index,        // image column index of the spot center, value range = [0, im_cols-1]
    int32_t       spot_radius_in_pixels,        // radius (not the diameter) of the spot in amount of pixels, must at least be 1
    int32_t       compression_id                // identifier for compression scheme, currenlty only the value 0 is supported
);
