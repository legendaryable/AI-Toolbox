#ifndef AI_TOOLBOX_FACTORED_BANDIT_POLICY_INTERFACE_HEADER_FILE
#define AI_TOOLBOX_FACTORED_BANDIT_POLICY_INTERFACE_HEADER_FILE

#include <AIToolbox/Factored/Types.hpp>
#include <AIToolbox/PolicyInterface.hpp>

namespace AIToolbox::Factored::Bandit {
    /**
     * @brief Simple typedef for most of a normal Bandit's policy needs.
     */
    class PolicyInterface : public virtual AIToolbox::PolicyInterface<void, void, Action> {
        public:
            using Base = AIToolbox::PolicyInterface<void, void, Action>;

            /**
             * @brief This function returns a vector containing all probabilities of the policy.
             *
             * Note that this may be expensive to compute, and should not
             * be called often (aside from the fact that it needs to
             * allocate a new Vector each time).
             *
             * Ideally this function can be called only when there is a
             * repeated need to access the same policy values in an
             * efficient manner.
             */
            virtual Vector getPolicy() const = 0;
    };
}

#endif

