
// Code generated by stanc v2.27.0
#include <stan/model/model_header.hpp>
namespace flight2_model_namespace {

using stan::io::dump;
using stan::model::assign;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 12> locations_array__ = 
{" (found before start of program)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 7, column 2 to column 21)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 16, column 2 to column 39)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 10, column 2 to column 26)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 12, column 4 to column 35)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 11, column 17 to line 13, column 3)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 11, column 2 to line 13, column 3)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 2, column 2 to column 8)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 3, column 9 to column 10)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 3, column 2 to column 18)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 4, column 8 to column 9)",
 " (in '/Users/barthap/studia/da/lab3-oneparam/flight2.stan', line 4, column 2 to column 11)"};



class flight2_model final : public model_base_crtp<flight2_model> {

 private:
  int M;
  Eigen::Matrix<double, -1, 1> miles__;
  std::vector<int> y; 
  Eigen::Map<Eigen::Matrix<double, -1, 1>> miles{nullptr, 0};
 
 public:
  ~flight2_model() { }
  
  inline std::string model_name() const final { return "flight2_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.27.0", "stancflags = "};
  }
  
  
  flight2_model(stan::io::var_context& context__,
                unsigned int random_seed__ = 0,
                std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "flight2_model_namespace::flight2_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 7;
      context__.validate_dims("data initialization","M","int",
           std::vector<size_t>{});
      M = std::numeric_limits<int>::min();
      
      current_statement__ = 7;
      M = context__.vals_i("M")[(1 - 1)];
      current_statement__ = 8;
      validate_non_negative_index("miles", "M", M);
      current_statement__ = 9;
      context__.validate_dims("data initialization","miles","double",
           std::vector<size_t>{static_cast<size_t>(M)});
      miles__ = Eigen::Matrix<double, -1, 1>(M);
      new (&miles) Eigen::Map<Eigen::Matrix<double, -1, 1>>(miles__.data(), M);
      
      
      {
        std::vector<local_scalar_t__> miles_flat__;
        current_statement__ = 9;
        miles_flat__ = context__.vals_r("miles");
        current_statement__ = 9;
        pos__ = 1;
        current_statement__ = 9;
        for (int sym1__ = 1; sym1__ <= M; ++sym1__) {
          current_statement__ = 9;
          assign(miles, miles_flat__[(pos__ - 1)],
            "assigning variable miles", index_uni(sym1__));
          current_statement__ = 9;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 10;
      validate_non_negative_index("y", "M", M);
      current_statement__ = 11;
      context__.validate_dims("data initialization","y","int",
           std::vector<size_t>{static_cast<size_t>(M)});
      y = std::vector<int>(M, std::numeric_limits<int>::min());
      
      current_statement__ = 11;
      y = context__.vals_i("y");
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 1;
    
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "flight2_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ theta;
      theta = DUMMY_VAR__;
      
      current_statement__ = 1;
      theta = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      {
        current_statement__ = 3;
        lp_accum__.add(normal_lpdf<propto__>(theta, 0, 0.021));
        current_statement__ = 6;
        for (int k = 1; k <= M; ++k) {
          current_statement__ = 4;
          lp_accum__.add(
            poisson_lpmf<propto__>(rvalue(y, "y", index_uni(k)),
              (rvalue(miles, "miles", index_uni(k)) * theta)));
        }
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    static constexpr bool propto__ = true;
    (void) propto__;
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    constexpr bool jacobian__ = false;
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "flight2_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double theta;
      theta = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      theta = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(
                0, lp__);
      vars__.emplace_back(theta);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      int y_1986;
      y_1986 = std::numeric_limits<int>::min();
      
      current_statement__ = 2;
      y_1986 = poisson_rng((9100 * theta), base_rng__);
      vars__.emplace_back(y_1986);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    int current_statement__ = 0; 
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      double theta;
      theta = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      theta = context__.vals_r("theta")[(1 - 1)];
      double theta_free__;
      theta_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      theta_free__ = stan::math::lb_free(theta, 0);
      vars__.emplace_back(theta_free__);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__ = std::vector<std::string>{"theta", "y_1986"};
    
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
      std::vector<size_t>{}};
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "y_1986");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "theta");
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "y_1986");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_1986\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"}]");
    
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    
    return std::string("[{\"name\":\"theta\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"y_1986\",\"type\":{\"name\":\"int\"},\"block\":\"generated_quantities\"}]");
    
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec;
      vars_vec.reserve(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        vars_vec.data(), vars_vec.size());
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars,
       emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec;
      params_r_vec.reserve(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r = Eigen::Map<Eigen::Matrix<double,Eigen::Dynamic,1>>(
        params_r_vec.data(), params_r_vec.size());
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }

};
}
using stan_model = flight2_model_namespace::flight2_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return flight2_model_namespace::profiles__;
}

#endif


