#ifndef __RECEIVER__H
#define __RECEIVER__H
#include "queue.hpp"
#include "sender.hpp"
#include "dispatcher.hpp"

namespace messaging {
    class receiver {
        messaging::queue q; 
    public:
        operator sender() {
            return sender(&q);
        }
        dispatcher wait() {
            return dispatcher(&q);
        }
    };
}
#endif