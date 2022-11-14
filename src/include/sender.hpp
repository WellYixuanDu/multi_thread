#ifndef __SENDER__H
#define __SENDER__H

#include "queue.hpp"

namespace messaging {
    class sender {
        messaging::queue *q;
    public:
        sender() : q(nullptr)
        {}
        explicit sender(messaging::queue *q_) : q(q_) {}
        template<typename Message>
        void send(Message const& msg) {
            if (q) {
                q->push(msg);
            }
        }
    };
}
#endif