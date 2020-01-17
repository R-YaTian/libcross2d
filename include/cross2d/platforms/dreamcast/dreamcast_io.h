//
// Created by cpasjuste on 17/11/17.
//

#ifndef C2D_DREAMCAST_IO_H
#define C2D_DREAMCAST_IO_H

#include "cross2d/skeleton/io.h"

namespace c2d {

    class DCIo : public Io {

    public:

        bool exist(const std::string &path) override;

        size_t getSize(const std::string &file) override;

        Type getType(const std::string &file) override;

        bool create(const std::string &path) override;

        std::vector<Io::File> getDirList(const std::string &path, bool sort, bool showHidden) override;

        std::string getHomePath() const override;

        std::string getRomFsPath() const override {
            return "/rd/";
        }
    };
}

#endif //C2D_DREAMCAST_IO_H