/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
     return {
    toBe: function (otherVal) {
      if (val !== otherVal) {
        throw new Error("Not Equal");
      }
      return true;
    },
    notToBe: function (otherVal) {
      if (val === otherVal) {
        throw new Error("Equal");
      }
      return true;
    },
  };
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */